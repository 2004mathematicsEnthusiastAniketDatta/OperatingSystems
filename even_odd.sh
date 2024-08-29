echo "__________________________________________________________________"
echo  "\t \t Parity of a Number"
echo "__________________________________________________________________"
echo -e "Enter the number:"
read n
if [ `expr $n % 2 ` -eq 0 ]
then 
    echo "$n is an even number."
else 
    echo "$n is an odd number."
fi

