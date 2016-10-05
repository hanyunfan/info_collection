#!/bin/bash

#for test windows machines

#./wmic -Uadministrator%amaxacma //157.22.244.240 "SELECT Caption FROM Win32_OperatingSystem"
#echo $?
./info.sh 157.22.244.240 administrator amaxacma 157.22.244.238 admin admin
