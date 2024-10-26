#!/bin/bash

<<comment
 Q. Take three numbers as input and fiind the minimum of the three numbers
comment

read -p "First input number:" n1;
read -p "First input number:" n2;
read -p "First input number:" n3;
if [  $n1 -lt  $n2 ] && [ $n1 -lt $n3 ];then
    min=$n1;
elif [ $n2 -lt $n1 ] && [ $n2 -lt $n3 ];then
    min=$n2;
elif [ $n3 -lt $n1 ] && [ $n3 -lt $n2 ];then
    min=$n3;
elif [$n1 -eq $n2 ] && [ $n1 -eq $n3 ];then
    min=$n1;
    echo "All numbers are equal";
else 
    echo "Are all input integers? retry please"
fi
echo "minimum of the three numbers $n1 , $n2 and $n3 is $min";

