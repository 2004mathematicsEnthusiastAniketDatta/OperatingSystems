#!/bin/bash
echo -e "Enter the range till which prime numbers are to be printed"
read r
is_prime() {
for ((i=0;i<=$1;i++));do
     if [ i -le 1 ];then
        return 1
    fi
    for((j=2;j*j<=i;j++));do
     if [ (($i % j)) -eq 0 ];then
         c=0
    fi
    done
    c=c+1
done 
}

echo "Enter the number:"
read num

if is_prime $num;then
    echo "$num is a prime number"
else
    echo "$num is not a prime number"
fi


