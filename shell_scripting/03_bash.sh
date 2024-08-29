#!/bin/bash

echo "___________________________________________________________________"
echo "\t \t Leap Year"
echo "___________________________________________________________________"
echo -e "Enter the Year:"
read year
if [ `expr $year % 100` -eq 0 ]
then 
    if [ `expr $year % 400` -eq 0 ]
    then 
          echo "Leap Year"
    else
          echo "Not leap Year"
    fi
else
     if [ `expr $year % 4` -eq 0 ]
     then 
         echo "Leap Year"
     else
         echo "Not leap Year"
     fi
fi  
