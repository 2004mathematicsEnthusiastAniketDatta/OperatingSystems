echo -e "Enter the string: \n"
read str
#checks if the input is a string or not
if [-z "str" ]; then
  echo "Input must be a String"
  exit 1
fi

# characters in the String

echo "Characters in the string:"
for ((i=0;i<${#str};i++)); do
    echo "${str:i:1}"
done

