#!/bin/bash
echo -e "Enter the range till which prime numbers are to be printed"
read r
is_prime() {
    if [ $1 -le 1 ]; then 
        return 1
    fi
    # $1 refers to the first command-line argument passed to the function.
    for ((i=2; i*i<=$1; i++)); do
        if [ $(( $1 % i )) -eq 0 ]; then
            return 1
        fi
    done
#exit status
    return 0
}

echo -e "Enter the range till which prime numbers are to be printed"
read num

for ((j=0;j<=num;j++));do
    if is_prime j; then
        echo "$j is a prime number"
    else 
        echo "$j is not a prime number"
    fi
done


