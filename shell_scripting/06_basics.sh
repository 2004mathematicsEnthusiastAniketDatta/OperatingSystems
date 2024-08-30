#!/bin/bash
<<COMMENT
PRIME NUMBERS HAVE TWO FACTORS 1 AND THE SAME NUMBER , 
THUS 1 IS UNITY WHICH IS NEITHER PRIME NOR COPRIME AND FOLLOWS THE RULES OF THE STRUCTURE UNITY , BECAUSE 1 HAS ONLY ONE  FACTOR.
2 IS PRIME BY DEFINITION, 3 IS ALSO PRIME WITH TWO FACTORS 1 AND 3 . 4 IS NOT A PRIME NUMBER. 4 WITH THREE FACTORS 1,2,4 . 

Here is a simple Bash script to check if a number is prime or not:
Bash

LET US EXPLORE FOR LOOPS IN SHELL SCRIPING WITH PRIME NUMBER PROGRAM

COMMENT


#!/bin/bash

# Function to check if a number is prime
is_prime() {
    if [ $1 -le 1 ]; then
        return 1
    fi

    for ((i=2; i*i<=$1; i++)); do
        if [ $(( $1 % i )) -eq 0 ]; then
            return 1
        fi
    done

    return 0
}

# Read the number from the user
echo "Enter a number: "
read num

# Check if the number is prime
if is_prime $num; then
    echo "$num is not a prime number"
else
    echo "$num is a prime number"
fi