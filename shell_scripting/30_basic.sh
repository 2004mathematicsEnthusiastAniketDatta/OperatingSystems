#!/bin/bash
# array and for loop
echo -e "Enter the elements of array seperated by spaces:";
read -a myArray;

echo "Elements of the array seperated by spaces:";
for element in ${myArray[@]}
do
     echo $element
done
length=${#myArray[*]};

for (( i=0;i<$length;i++ ))
do
     echo "Value of array is ${myArray[i]}";
done
