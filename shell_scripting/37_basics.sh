#!/bin/bash
#example of break in a loop
#We just need to confirm if a given number is present or not
no=6
for i in 1 2 3 4 5 6 7 8 9
do 
     if [[ $no -eq $i ]];then
       echo "6 is $no";
       break;
     fi
     echo "Number is $i";
done


