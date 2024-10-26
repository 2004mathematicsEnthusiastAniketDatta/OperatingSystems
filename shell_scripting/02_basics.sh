#!/bin/bash
# variables 
<<COMMENT
Q.Write a program in shell script to check whether a number is odd or even.
COMMENT
# -e escape sequences 
echo "__________________________________________________________________"
echo  -e " \t\t Parity of a Number"
echo "__________________________________________________________________"
echo -e "Enter the number:"
read n
#n=5  n is variable is  a container that stores some data during data processing  , variable refers to some location in memory $n -> 5 
#name="string" "" is preffered for strings echo $(name) -> string
#readonly num=5 : constant variable
#always provide spacing after third bracket of if and before closing square brace of if
#` expr expression` $variable is always requried for expression
#-eq : equal (==)
if [ `expr $n % 2 ` -eq 0 ]
then 
    echo "$n is an even number."
else 
    echo "$n is an odd number."
fi

