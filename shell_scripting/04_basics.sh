#!/bin/bash
<<COMMENT
while [ condition ]
do
//code
done
//code
COMMENT
echo "____________________________________________________________________"
echo -e "\t \t Factorial of a number"
echo "____________________________________________________________________"
echo "Enter the number:"
read n
i=0
f=1
while [ $i -lt $n ]
do
i=`expr $i + 1`
f=`expr $f \* $i`
done
echo "The factorial of $n is: $f"




