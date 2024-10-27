#!/bin/bash
#To reaad content from a csv file

cat 32_basic.csv | awk 'NR!=1 {print}' | while IFS="," read f1 f2 f3 f4 f5 f6 f7 f8 f9 f10
do
   echo $f1;
   echo $f2;
   echo $f3;
   echo $f4;
   echo $f5;
   echo $f6;
   echo $f7;
   echo $f8;
   echo $f9;
   echo $f10;
done
