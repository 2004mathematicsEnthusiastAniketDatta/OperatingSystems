#!/bin/bash

#Arrays

myArray=( 1 2 Hello "Hello world" )
echo "Value in 0th index: ${myArray[0]}"
echo "value in 1st index: ${myArray[1]}"
echo "value in 2nd index: ${myArray[2]}"
echo "value in 3rd index: ${myArray[3]}"
echo "all the elements in Array: ${myArray[*]}"
