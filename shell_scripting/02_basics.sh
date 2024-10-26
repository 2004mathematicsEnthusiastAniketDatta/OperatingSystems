#!/bin/bash
# variables 
<<COMMENT
Q.Write a program in shell script to check whether a number is odd or even.
COMMENT

echo "__________________________________________________________________"
echo  -e " \t\t Parity of a Number"
echo "__________________________________________________________________"
echo -e "Enter the number:"
read n
#n=5  n is variable is  a container that stores some data during data processing  , variable refers to some location in memory $n -> 5 
#name="string" "" is preffered for strings echo $(name) -> string
#readonly num=5 : constant variable
if [ `expr $n % 2 ` -eq 0 ]
then 
    echo "$n is an even number."
else 
    echo "$n is an odd number."
fi

