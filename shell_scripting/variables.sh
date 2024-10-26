#!/bin/bash

#Script to show how to use variables

a=10;
name="shell";
age=20;
echo "My name is $name and his age is $age and a is $a";
# variable gets updated
name="bash shell";
echo "My name is $name and his age is $age and a is $a";
# var to store the output of a command
HOSTNAME=$(hostname);
echo "Name of the host is : $HOSTNAME";
#constant variable
readonly var=5;
echo $var;

