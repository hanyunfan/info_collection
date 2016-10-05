#!/bin/bash
#set -x

# Script created by Frank Han,
# Date: 9/26/2016
# For retrieve remote Linux system info.
#
# Usage ./info ssh_ip_address ssh_user ssh_password ipmi_ip ipmi_user ipmi_password
#

#Preparaion on local machine

##Install sshpass and other tools on local machine, currently support Ubuntu and CentOS
DISTR=`cat /etc/*release | grep DISTRIB_ID |cut -d'=' -f2`
if [ $DISTR='Ubuntu' ]
then 
   apt-get install -y sshpass openssh-client ipmitool >/dev/null
else
   yum install -y sshpass openssh-clients ipmitool >/dev/null
fi

#This is the flag for OS type, 
OS_LINUX=1
OS_WINDOWS=2
OS_VMWARE=3
OS_FLAG=0

##Assemble command#1 for Inband SSH or WMI
IP=$1
SSHUSER=$2
SSHPW=$3
SSH="sshpass -p $SSHPW ssh $SSHUSER@$IP" 
WMI="./wmic -U$SSHUSER%$SSHPW //$IP"

##Assemble command#2 for IPMI
IPMIIP=$4
IPMIUSER=$5
IPMIPW=$6
IPMI="ipmitool -I lanplus -H $IPMIIP -U $IPMIUSER -P $IPMIPW"

##IP validation function
function validate_IP() {
if [ `echo $1 | grep -o '\.' | wc -l` -ne 3 ]; then
   echo "Parameter '$1' does not look like an IP Address (does not contain 3 dots).";
   exit 1;
elif [ `echo $1 | tr '.' ' ' | wc -w` -ne 4 ]; then
   echo "Parameter '$1' does not look like an IP Address (does not contain 4 octets).";
   exit 1;
else
   for OCTET in `echo $1 | tr '.' ' '`; do
      if ! [[ $OCTET =~ ^[0-9]+$ ]]; then
         echo "Parameter '$1' does not look like in IP Address (octet '$OCTET' is not numeric).";
         exit 1;
      elif [[ $OCTET -lt 0 || $OCTET -gt 255 ]]; then
         echo "Parameter '$1' does not look like in IP Address (octet '$OCTET' is not in range 0-255).";
         exit 1;
      fi
   done
fi
#echo "Parameter '$1' is a valid IP Address.";
return 0;
}

#Check if inputs has all 6 parameters
if [ "$#" -eq 6 ] 
then
   #Check if 1st one is IP address; if not exist.
   if validate_IP $IP
   then
      #Test SSH
      if $SSH uptime $>/dev/null; then
         OS_FLAG=$OS_LINUX;  
      #Test Windows
      elif $WMI "SELECT Caption FROM Win32_OperatingSystem" >/dev/null ; then
         OS_FLAG=$OS_WINDOWS;
      #Test VMWARE
      #Place holder
      elif [ 1 == 2 ] ; then
         OS_FLAG=$OS_VMWARE;
      else 
         exit 1;
      fi 
   else
      printf "Inband login unsuccessful"
   fi

   if validate_IP $IPMIIP
   then
      #Test IPMI connection
      $IPMI chassis selftest &>/dev/null
      if [ "$?" != 0 ]; then printf "Cannot connect to remote server by IPMI"; exit 1; fi
   else
      printf "IPMI login unsuccessful"
   fi
else
   printf "Usage: $0 ssh_ip_address ssh_user ssh_password ipmi_ip ipmi_user ipmi_password\n"; exit 1;
fi

#script running time
date

#check() is nothing but a wrapper
check_info(){
printf "\n$1\n"
case $OS_FLAG in
   1)
     #Check_info Type Linux_cmd
     $SSH "echo $SSHPW | sudo -S $2"
    ;;
   2)
     #Check_info Type WMI_cmd
     #Consider to use printf to format the output
     $WMI "$2"
   ;; 
   3)
   ;;
   *)
   exit 1
esac
return 0
}

#CPU
case $OS_FLAG in
   1)
      check_info CPU "dmidecode -t 4 | egrep 'Manufacturer:|Family:|Version|Count'" 
    ;;
   2)
      check_info CPU "SELECT Name,NumberOfCores,NumberOfLogicalProcessors FROM win32_processor"
   ;; 
   3)
   ;;
   *)
   exit 1
esac


#Memory
case $OS_FLAG in
   1)
     $SSH 'cat /proc/meminfo | grep MemTotal'
     ##locations (need sudo rights)
     check_info Memory "dmidecode -t memory| egrep 'Locator|Size|Serial Number'"
    ;;
   2)
     check_info Memory "SELECT Model,PartNumber,DeviceLocator,PositionInRow FROM Win32_PhysicalMemory"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#HDD/SSD
case $OS_FLAG in
   1)
     check_info "Local disks" "cat /proc/scsi/scsi | grep -v Virtual | grep -B 1 Model"
    ;;
   2)
     check_info "Local disks" "SELECT Caption,DeviceID,FileSystem,Size,VolumeSerialNumber FROM win32_logicaldisk"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#RAID controller
##Model
##disk status throught RAID controller may need to have RAID tools installed.

#Motherboard
case $OS_FLAG in
   1)
     check_info Motherboard "dmidecode -t baseboard| egrep 'Manufacturer|Product|Serial'"
    ;;
   2)
     check_info Motherboard "SELECT Manufacturer,SerialNumber,Version FROM win32_baseboard"
     check_info System "SELECT Manufacturer,Model from Win32_ComputerSystem" 
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#BIOS
case $OS_FLAG in
   1)
     check_info BIOS "dmidecode -t bios| egrep 'Version|Release|Revision'"
    ;;
   2)
     check_info BIOS "SELECT SMBIOSBIOSVersion FROM win32_BIOS"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#OS Disturbutuion
case $OS_FLAG in
   1)
     check_info "OS info" "uname -a"
    ;;
   2)
     check_info "OS info" "SELECT Caption FROM Win32_OperatingSystem"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#FileSystem
##Type

#Network Cards
#Part of PCIe output
#MAC
case $OS_FLAG in
   1)
     check_info MAC "ifconfig | grep HWaddr"
    ;;
   2)
     check_info MAC "SELECT Caption,MACAddress,IPAddress FROM win32_NetworkAdapterConfiguration where IPEnabled = True"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#PCIe slots
case $OS_FLAG in
   1)
     check_info PCIe "dmidecode -t slot| egrep 'Designation|Current|Bus'"
    ;;
   2)
     check_info PCIe "SELECT Description,Manufacturer,Model,PartNumber,SerialNumber,Tag FROM Win32_OnBoardDevice"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#Fans
$IPMI sdr type "Fan" |cut -d'|' -f1,3

#PSU
$IPMI sdr type "Power Supply"

#USB device
case $OS_FLAG in
   1)
     check_info USB "cat /sys/kernel/debug/usb/devices |egrep '^S:'"
    ;;
   2)
     check_info USB "SELECT * FROM Win32_USBControllerDevice"
   ;; 
   3)
   ;;
   *)
   exit 1
esac

#reserved for func of formating the outputs

exit 0

