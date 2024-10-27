#!/bin/bash
#iterate over a file
items="/workspaces/OperatingSystems/shell_scripting/FILE1.txt";

for item in $(cat $items)
do
     echo "Product is $item";
done
