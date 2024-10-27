#!/bin/bash
#to read content from a csv file
while IFS="," read f1 f2 f3
do
   echo $f1;
   echo $f2;
   echo $f3;
done < 32_basic.csv

