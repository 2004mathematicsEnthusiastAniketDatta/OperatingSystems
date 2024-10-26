#!/bin/bash
# keep decrementing a value until the value is 1
a=10;
until [[ $a -eq 1 ]];do
     echo "value of a is $a";
     let a--;
done
