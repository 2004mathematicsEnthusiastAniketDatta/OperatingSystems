#!/usr/bin/bash
read -p "Enter the number" n

for i in {1..10}; do
 res=$((n*$i))
 echo "#res"
done