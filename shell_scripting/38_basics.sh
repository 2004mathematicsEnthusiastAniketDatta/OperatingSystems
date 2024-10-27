#!/bin/bash
#example of continue in loop
#Suppose we need to print odd numbers only from given numbers from 0 - 10

for i in 0 1 2 3 4 5 6 7 8 9 10
do
   let r=$i%2;
   if [[ $r -eq 0 ]];then
      continue;
   fi
   echo "Odd number is $i";
done

