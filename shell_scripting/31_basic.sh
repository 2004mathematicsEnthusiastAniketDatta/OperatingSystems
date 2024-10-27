#!/bin/bash
#reading from a file

while read myvar
do
     echo "Value from file  is $myvar"
done < FILE1.txt
