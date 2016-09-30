/* header auto-generated by pidl */

#ifndef _HEADER_sasl_helpers
#define _HEADER_sasl_helpers

struct saslauthdRequest {
	uint16_t authid_length;/* [value(strlen_m(authid))] */
	const char *authid;/* [charset(UTF8)] */
	uint16_t passwd_length;
	uint8_t *passwd;
	uint16_t service_length;/* [value(strlen_m(service))] */
	const char *service;/* [charset(UTF8)] */
	uint16_t realm_length;/* [value(strlen_m(realm))] */
	const char *realm;/* [charset(UTF8)] */
}/* [public,flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX)] */;


struct decode_saslauthd {
	struct {
		struct saslauthdRequest req;
	} in;

};

#endif /* _HEADER_sasl_helpers */