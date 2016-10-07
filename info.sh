#!/bin/bash
#set -x

# Script created by Frank Han,
# Date: 9/26/2016
# For retrieve remote Linux/Windows/VMWare system info.

#Check if vCLI was installed on host machine

if [ ! -f /usr/bin/esxcli ]; then 
   printf "In order to remotely call a ESXi system, you need to have vCLI installed on the host system under '/usr/bin/esxcil'.\n Installation please refer to https://my.vmware.com/web/vmware/details?downloadGroup=VCLI600&productId=491\n" 
   exit 1
fi




#
# Usage ./info ssh_ip_address ssh_user 'ssh_password' ipmi_ip ipmi_user 'ipmi_password'
#

if [[ $# -ne 6 ]] ; then
   printf "Usage: $0 ssh_ip_address ssh_user 'ssh_password' ipmi_ip ipmi_user 'ipmi_password'\n"; exit 1;
   exit 1
fi

#Preparaion on local machine

##Install sshpass and other tools on local machine, currently support Ubuntu and CentOS
DISTR=`cat /etc/*release | grep DISTRIB_ID |cut -d'=' -f2`
if [ "$DISTR" = "Ubuntu" ]
then 
   apt-get install -y sshpass openssh-client ipmitool &>/dev/null
else
   yum install -y epel-release &>/dev/null
   yum install -y sshpass openssh-clients ipmitool &>/dev/null
fi

#This is the flag for OS type, 
OS_LINUX=1
OS_WINDOWS=2
OS_VMWARE=3
OS_FLAG=0

##Assemble command#1 for Inband OSs
IP="$1"
SSHUSER="$2"
SSHPW="$3"
#Linux
SSH="sshpass -p $SSHPW ssh -oStrictHostKeyChecking=no $SSHUSER@$IP" 
#Windows
WMI="./wmic -U$SSHUSER%$SSHPW //$IP"
#VMWare
VCLI="esxcli -s $IP -u $SSHUSER -p $SSHPW "

##Assemble command#2 for IPMI
IPMIIP="$4"
IPMIUSER="$5"
IPMIPW="$6"
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




#Check if 1st one is IP address; if not exist.
if validate_IP $IP
then
   #Prepare for VMWare ahead
   #Use eval command to get the correct result from sub-shell
   if [ $VI_THUMBPRINT !="" ] ; then export VI_THUMBPRINT=""; fi
   export VI_THUMBPRINT=`eval $VCLI hardware |cut -d ' ' -f8`
   #printf "Waiting on OS detection.\n"
   #Test VMWARE if vCli doesn't work and the machine can do SSH, then treat it as Linux
   if $VCLI hardware &>/dev/null; then
      OS_FLAG=$OS_VMWARE;
   #Test SSH
   elif $SSH uptime &>/dev/null; then
      OS_FLAG=$OS_LINUX;  
   elif printf "Waiting on OS detection.\n" && $WMI "SELECT Caption FROM Win32_OperatingSystem" >/dev/null ; then
   #Test Windows
      OS_FLAG=$OS_WINDOWS;
   else 
      printf "Error: Cannot detect the Operating system on the remote system.\n"
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

#script running time
date

#check() is nothing but a wrapper
check_info(){
printf "\n$1\n"
#echo $#
#echo $@
case $OS_FLAG in
   1)
     #Check_info Type Linux_cmd
     $SSH "echo $SSHPW | sudo -S $2"
    ;;
   2)
     #Check_info Type WMI_cmd
     #Consider to use printf to format the output
     $WMI "$3"
   ;; 
   3)
     #Check_info Type VMWare_cmd
     $VCLI $4
   ;;
   *)
   exit 1
esac
return 0
}

#CPU
#check_info TYPE Linux_cmd WMI_cmd VMWare_cmd
check_info CPU "dmidecode -t 4 | egrep 'Manufacturer:|Family:|Version|Count'" "SELECT Name,NumberOfCores,NumberOfLogicalProcessors FROM win32_processor" "hardware cpu global get"

#Memory
     check_info Memory "dmidecode -t memory| egrep 'Locator|Size|Serial Number'" "SELECT Model,PartNumber,DeviceLocator,PositionInRow FROM Win32_PhysicalMemory" "hardware memory get"

#HDD/SSD
     check_info "Local disks" "cat /proc/scsi/scsi | grep -v Virtual | grep -B 1 Model" "SELECT Caption,DeviceID,FileSystem,Size,VolumeSerialNumber FROM win32_logicaldisk" "storage core device list"

#RAID controller
##Model
##disk status throught RAID controller may need to have RAID tools installed.

#Motherboard
     check_info Motherboard "dmidecode -t baseboard| egrep 'Manufacturer|Product|Serial'" "SELECT Manufacturer,SerialNumber,Version FROM win32_baseboard" "hardware platform get"
     check_info Motherboard "dmidecode -t baseboard| egrep 'Manufacturer|Product|Serial'" "SELECT Manufacturer,Model from Win32_ComputerSystem" "hardware platform get"

#BIOS
     check_info BIOS "dmidecode -t bios| egrep 'Version|Release|Revision'" "SELECT SMBIOSBIOSVersion FROM win32_BIOS" "hardware ipmi fru list"

#OS Disturbutuion
     check_info "OS info" "uname -a" "SELECT Caption FROM Win32_OperatingSystem" "system version get"

#FileSystem
##Type

#Network Cards
#Part of PCIe output
#MAC
     check_info MAC "ifconfig | grep HWaddr" "SELECT Caption,MACAddress,IPAddress FROM win32_NetworkAdapterConfiguration where IPEnabled = True" "network nic list"

#PCIe slots
     check_info PCIe "dmidecode -t slot| egrep 'Designation|Current|Bus'" "SELECT Description,Manufacturer,Model,PartNumber,SerialNumber,Tag FROM Win32_OnBoardDevice" "hardware pci list"

#Fans
$IPMI sdr type "Fan" |cut -d'|' -f1,3

#PSU
$IPMI sdr type "Power Supply"

#USB device
     check_info USB "cat /sys/kernel/debug/usb/devices |egrep '^S:'" "SELECT * FROM Win32_USBControllerDevice" "hardware bootdevice list"

#reserved for func of formating the outputs

exit 0

