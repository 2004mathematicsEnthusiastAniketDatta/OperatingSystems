#!/bin/bash

#case

echo "Choose wisely:"
echo "a for printing date:"
echo "b for list of scripts"
echo "c to check the current location"

read -p "Enter the choice:" choice

case $choice in
    a)
             echo "Today's date is: "
             date
             echo "Thanks"
             ;;
    b)
            echo "List of available scripts in the present working directory:"
            ls
             echo "Thanks"
             ;;
    c)
            echo "Present working directory:"
            pwd            
            echo "Thanks"
            ;;
    *)echo "Please provide a value within the available choices"
esac
