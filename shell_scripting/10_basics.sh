#!/bin/bash
echo -e "Enter the number:"
read n
for ((i=1;i<=n;i++));do
     sum=`expr $sum \+ $i`
done
echo "Sum of first $n numbers is:$sum"ok
