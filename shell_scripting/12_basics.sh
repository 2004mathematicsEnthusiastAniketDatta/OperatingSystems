#!/bin/bash

#Arrays

myArray=( 1 2 Hello "Hello world" )
echo "Value in 0th index: ${myArray[0]}"
echo "value in 1st index: ${myArray[1]}"
echo "value in 2nd index: ${myArray[2]}"
echo "value in 3rd index: ${myArray[3]}"
echo "all the elements in Array: ${myArray[*]}"
#Length of the array
echo "Number of values of the array: ${#myArray[*]}" 
#Array slicing 
echo "Values from index 1 to index 3: ${myArray[*]:1:3}"
#${Arrayname[*]:starting index:number of elements from the starting index to be printed}

#updating an Array and concatenating more elements
myArray+=( New 30 40 )

echo "Updated Array:${myArray[*]}"

#key-value pairs

declare -A dictionary
dictionary=( [name]=Aniket [age]=20 [city]=Kolkata )
echo "Name is ${dictionary[name]}"
echo "Age is ${dictionary[age]}"
echo "City is ${dictionary[city]}"


