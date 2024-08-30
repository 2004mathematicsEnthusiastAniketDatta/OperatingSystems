#!/bin/bash
# variables 
echo "__________________________________________________________________"
echo  " \t\t Parity of a Number"
echo "__________________________________________________________________"
echo -e "Enter the number:"
read n
#n=5 
#readonly num=5 : constant variable
if [ `expr $n % 2 ` -eq 0 ]
then 
    echo "$n is an even number."
else 
    echo "$n is an odd number."
fi

