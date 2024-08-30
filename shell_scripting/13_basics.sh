#!/bin/bash
#Strings and String Operations

MyString="SHELL SCRIPTING IS VERY IMPORTANT!"
MyStringLength=${#MyString}
echo "Length of the string is $MyStringLength"
echo "Upper case of the string is ${MyString^^}"
echo "Lower case of the string is ${MyString,,}"
echo "Replaced word is ${MyString/VERY/EXTREMELY}"
#VARIABLE/WORD TO BE REPLACED/ NEW WORLD
echo "sliced string : ${MyString:0:15}"