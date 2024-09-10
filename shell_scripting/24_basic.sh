#!/bin/sh

# Check if list is provided
if [ $# -eq 0 ]; then
    echo "Please provide a list of numbers"
    exit 1
fi

# Initialize max and min with the first element of the list
max=$1
min=$1

# Iterate over the list
for num in "$@"; do
    # Check if the current number is greater than max
    if [ $num -gt $max ]; then
        max=$num
    fi
    
    # Check if the current number is smaller than min
    if [ $num -lt $min ]; then
        min=$num
    fi
done

# Print the max and min elements
echo "Maximum element: $max"
echo "Minimum element: $min"
