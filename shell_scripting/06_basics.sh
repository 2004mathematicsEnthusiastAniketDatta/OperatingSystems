#!/bin/bash
<<COMMENT 
the  code checks whether a give number is prime or not, if the given number is prime ,the number should have two factors 1 and the same number .
2 has two factors 1 and 2, hence 2 is prime , where as 1 has only one factor 1 hence 1 is not prime. Similarly , 3 ,5,7,11,.... are prime numbers.
Coprime numbers are numbers that are not prime.
COMMENT
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
    echo "$num is a prime number"
else
    echo "$num is not a prime number"
fi
