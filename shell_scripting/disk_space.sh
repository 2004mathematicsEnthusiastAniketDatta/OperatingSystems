#!/bin/bash
FU=$(df -h | egrep -v "Filesystem|tmps" | grep "sda2" | awk '{print $5}' | tr -d %);

echo $FU;

TO="xyz@gmail.com";
if [[ $FU -ge 80 ]];then
     echo "WARNING! disk space is low -$FU %" | mail -S "DISK SPACE ALERT!" $TO;
else
      echo "Disk space is free";   
