#!/bin/bash
# if value not provided to variable then empty variable is there so empty space is printed on terminal when we try to get the echo

#to access the arguements

func(){
    echo "first arguement is $1";
    echo "second arguement is $2";
    echo "All the arguements are - $@"; 
    echo "Number of arguements are - $#";   
}
func 0 1 2

#For loop to access the values from arguements

for filename in $@
do 
    echo "Copying file - $filename";
done




