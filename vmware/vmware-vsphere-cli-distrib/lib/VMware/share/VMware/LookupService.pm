####################################################
# Copyright 2014 VMware, Inc.  All rights reserved.
####################################################
#
# @file LookupService.pm
# The file implements Lookup service perl module.
#
# @copy 2014, VMware Inc.
#

#
# @class LookupService
# This class used to get the SSO or VC url.
#
package LookupService;

#
# Core Perl modules
#
use strict;
use LWP::UserAgent;
use HTTP::Request;
use HTTP::Headers;
use XML::LibXML;

# Standard values used for VC service
my $vc_product_id = "com.vmware.cis";
my $vc_type_id = "vcenterserver";
my $ep_vc_protocol = "vmomi";
my $ep_vc_type_id = "com.vmware.vim";
# Standard values used for SSO service
my $sso_product_id = "com.vmware.cis";
my $sso_type_id = "cs.identity";
my $ep_sso_protocol = "wsTrust";
my $ep_sso_type_id = "com.vmware.cis.cs.identity.sso";

#To remove SSL Warning, switching from IO::Socket::SSL to Net::SSL
$ENV{PERL_NET_HTTPS_SSL_SOCKET_CLASS} = "Net::SSL";
#To remove host verification
$ENV{PERL_LWP_SSL_VERIFY_HOSTNAME} = 0;

#
# @method url_ipv6_check
# To check type of IP specified
#
# @param $lookup_url  - Lookup Service URL
#
# @return Formated Lookup URL
#
sub url_ipv6_check{
   my $lookup_url = shift;
   my $url = $lookup_url;
   # Triming out, host IP from "$url" i.e. $2 = "fe:10:20:30:70e:fe"
   if ($url =~ s|http(s?)://(.*)/lookupservice/.*|http$1://$2/lookupservice(.*)|i) {
      $url = $2;
      # Checking if the host specified is in IPv6 format
      if (($url =~ tr/:/:/) > 1){
         # Loading IPv6 module
         require Net::INET6Glue::INET_is_INET6;
         if (!($url =~ /]/)){
            # If host is in IPv6 and doesen't have any square bracket then adding it
            $url = "[" . $url . "]";
            # Constructing lookup url as "http(s)//[fe:10:20:30:70e:fe]/lookupservice/sdk"
            $lookup_url =~ s|http(s?)://(.*)/lookupservice.*|http$1://$url/lookupservice/sdk|i;
         }
      }
   }
   return $lookup_url;
}

#
# @method new
# Constructor
#
# @param product  - Product
# @param product_type_id  - Type of Product
# @param protocol  - Protocol
# @param protocol_type_id  - Type of Protocol
#
# @return SOAP message
#
sub soap_message{
   my ($product, $product_type_id, $protocol, $protocol_type_id) = @_;
   my $soap_message = "
    <S:Envelope xmlns:S=\"http://schemas.xmlsoap.org/soap/envelope/\">
        <S:Body>
            <List xmlns=\"urn:lookup\">
                <_this type=\"LookupServiceRegistration\">ServiceRegistration</_this>
                <filterCriteria>
                    <serviceType>
                        <product>$product</product>
                        <type>$product_type_id</type>
                    </serviceType>
                    <endpointType>
                        <protocol>$protocol</protocol>
                        <type>$protocol_type_id</type>
                    </endpointType>
                </filterCriteria>
            </List>
        </S:Body>
    </S:Envelope>
   ";
   return $soap_message;
}

#
# @method byte_length
# To get the length of the request, used for setting the HTTP header
#
# @param $string  - HTTP request string
#
# @return Blessed object
#
sub byte_length {
   my ($string) = @_;
   use bytes;
   return length($string);
}

#
# @method request_dispatcher
# Dispatch HTTP request to Lookup Service
#
# @param $soap_message  - SOAP message request
# @param url  - Lookup Service URL
#
# @return HTTP response
#
sub request_dispatcher {
   my $soap_message = shift;
   my $url = shift;
   my $user_agent = LWP::UserAgent->new(agent => 'viperl');
   my $http_header = HTTP::Headers->new(
                        Content_Type => 'text/xml',
                        SOAPAction => 'urn:lookup/2.0',
                        Content_Length => byte_length($soap_message));
   my $http_request = HTTP::Request->new('POST',
                                    $url,
                                    $http_header,
                                    $soap_message);
   my $response = $user_agent->request($http_request);

   if ($response->content =~ /Connection refused/) {
      die $response->content . "\n";
   } elsif ($response->content =~ /Bad hostname/) {
      # Loading IPv6 module, for pure IPv6
      eval {
         require Net::INET6Glue::INET_is_INET6;
      };
      if ($@){
         die $response->content . "\n";
      }
      $response = $user_agent->request($http_request);
      # Still not able to resolve hostname
      if ($response->content =~ /Bad hostname/) {
         die $response->content . "\n";
      }
   } elsif ($response->content =~ /Connect failed/) {
      die $response->content . "\n";
   }
   return $response;
}

#
# @method get_ssourl_from_lookupservice
# Returns SSO URL registred with Lookup Service
#
# @param url  - Lookup service URL
#
# @return SSO URL
#
sub get_ssourl_from_lookupservice {
   my $url = shift;
   $url = url_ipv6_check($url);
   # Getting response
   my $response = request_dispatcher(soap_message(
                            $sso_product_id, $sso_type_id,$ep_sso_protocol,
                            $ep_sso_type_id), $url);
   return get_list_structure_value($response);
}

#
# @method get_list_structure_value
# To get proper value of attribute from HTTP response
#
# @param $response  - HTTP response
#
# @return Requested URL
#
sub get_list_structure_value{
   my $response = shift;
   my $xml_parser = XML::LibXML->new;
   my $result;
   eval { $result = $xml_parser->parse_string($response->content) };
   if ($@) {
      # Response is not well formed xml - possibly be a setup issue
      die "SOAP request error - possibly a protocol issue: " . $response->content . "\n";
   }
   my $body = $result->documentElement()->getChildrenByTagName('soapenv:Body')->shift;
   my $return_val = $body->getChildrenByTagName('ListResponse')->shift;
   $return_val = $return_val->getChildrenByTagName('returnval')->shift;
   $return_val = $return_val->getChildrenByTagName('serviceEndpoints')->shift;
   $return_val = $return_val->getChildrenByTagName('url')->shift;
   return $return_val->textContent;
}

#
# @method get_vcurl_from_lookupservice
# Returns vCenter URL registred with Lookup Service
#
# @param url  - Lookup Service URL
#
# @return VCenter URL
#
sub get_vcurl_from_lookupservice{
   my $url = shift;
   $url = url_ipv6_check($url);
   # Getting response
   my $response = request_dispatcher(soap_message(
                            $vc_product_id, $vc_type_id, $ep_vc_protocol,
                            $ep_vc_type_id), $url);
   return get_list_structure_value($response);
}

1;