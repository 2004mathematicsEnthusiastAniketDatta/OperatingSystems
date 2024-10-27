#!/bin/bash
FU=$(df -h | egrep -v "Filesystem|tmps" | grep "sda2" | awk '{print $5}' | tr -d %);

echo $FU;

if [[ $FU -ge 80 ]];then
     echo "WARNING! disk space is low";
else
      echo "Disk space is free";   
