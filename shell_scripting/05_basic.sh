#!/bin/bash

<<COMMENT
bash shell : echo $0 in  bash terminal 
Bash is a single-pass interpreter , which means this read one comment at a time, and runs this then and there. The same thing is true with other types of shells - sh, ksh,zsh ,csh,etc.
The bash interpreter consists of Lexer ,Parser ,Evaluator ,set of Internal and external commands. Lexer breaks the individual script into tokens,
parser analyzes the tokens to create an Abstract Syntax Tree. Evaluator executes the AST , performing actions and evaluating expressions.
bash.c : the main entry point , responsible for initializing the interpreter and executing the script.parse.y: the parser generator file , used to create parser code , 
eval.c is the evaluator responsible for executing the Abstract Syntax Tree. builtins.c implement builtin commands,expand.c handles word expansion , parameter expansion and command substitution.
Bash requires a Recursive-descent parser, which allows efficient parsing of complex scripts.
The evaluator requires a stack-based approach to execute the Abstract Syntax Tree.
Bash has a vast array of built in commands which are implemented in C for performance reasons.
External commands which are associated to the files in bin directory of root directory are executed with fork and exec system calls

COMMENT

# script to show how to use variables: 
echo "Enter the first number:"
read n1
echo "Enter the second number:"
read n2
echo "Enter the third number:"
read n3

if [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]; then
    max=$n1
elif [ $n2 -gt $n1 ] && [ $n2 -gt $n3 ]; then
    max=$n2
elif [ $n3 -gt $n1 ] && [ $n3 -gt $n2 ]; then
    max=$n3
elif [ $n1 -eq $n2 ] && [ $n1 -eq $n3 ]; then
    max=$n1
else
    echo "All numbers are equal"
fi

echo "Maximum number is: $max"