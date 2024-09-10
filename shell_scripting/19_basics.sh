echo -e "\t \t Reverse of Number"
echo "Enter the number to be reversed:"
read n
rev=0
while [ $n -gt 0 ]; do
   rev=$(((rev*10)+($n%10)))
   n=$((n/10))
done
echo $rev