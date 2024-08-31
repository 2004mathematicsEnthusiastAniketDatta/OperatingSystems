#!/bin/bash

#user interaction

#user input for a variable

read -p "Name:" name
echo "User's name is $name"

echo "What is your age"
read age
echo "User 's age is $age"

#user input for Arrays:

echo "Enter array elements separated by spaces:"
read -a myArray
# myArray[@] takes individual array elements until space is noticed and this allows seperate printing of every word of the array with spaces among them , 
#this goes on till the last element of the array
echo "Array elements are:"
for element in "${myArray[@]}"; do
  echo "$element"
done
