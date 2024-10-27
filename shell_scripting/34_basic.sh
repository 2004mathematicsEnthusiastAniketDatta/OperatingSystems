#!/bin/bash
<<comment
FUNCTIONS: Block of code which perform some task and run when this is called.
Functions can be reused many times in our program which lessen our lines of code.We can pass arguements to the mehod.
comment

read -p "Enter a number:  " n;
function is_prime(){
    local num=$1
    if [[ $num -le 1 ]]
    then
       return 1;
    fi
    for (( i=2;i*i<=$num;i++ ))
    do
        if [[`expr $num % i` -eq 0 ]];then
             return 1;
        fi
    done
    return 0;
}

if is_prime n;then
       echo "$n is prime number";
else
       echo "$n is not prime number";
fi
#addition function with arguements
addition(){
    local num1=$1;
    local num2=$2;
    let sum=$num1+$num2;
    echo "Sum of $num1 and $num2 is $sum";
}
addition 12 13
