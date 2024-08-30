#!/bin/bash
echo -e "Enter the range till which prime numbers are to be printed"
read r
is_prime() {
for ((i=0;i<=$1;i++));do
     if [ i -le 1 ];then
        return 1
    fi
    for((j=2;j*j<=i;j++));do
     if [ $1(($)) ] 

}