#!/bin/bash
<<COMMENT
write a shell script to find the factorial value of any integer entered through the keyboard.
COMMENT
echo -e "Enter the number"
read n
i=0
f=1
while [ $i -lt $n ];do
  i=`expr $i + 1`
  f=`expr $f \* $i`
done

echo "The factorial of $n is: $f" 
