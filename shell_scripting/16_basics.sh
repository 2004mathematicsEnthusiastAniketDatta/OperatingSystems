#!/bin/bash

read -p "Enter your Marks: " marks

# if [[ $marks -gt 40 ]]
# then
#        echo "Pass"
# elif [[ $marks -gt 60 ]]
# then
#         echo "Third Division"
# elif [[ $marks -gt 80 ]]
# then 
#         echo "Second Division"
# elif [[ $marks -gt 95 ]]
# then 
#         echo "First Division"        
# else
#        echo "Fail!!"
# fi 
# here, for any marks > 40, first condition satisfies hence the control doesnot enter the elif statements

if [[ $marks -ge 80 ]]
then
     echo "First Division"
elif [[ $marks -ge 60 ]]
then
     echo "Second Division"
else
     echo "Fail"
fi 

<< COMMENT
 Operators :
 Equal:- -eq , /==
 Greater than or Equal to:- -ge
 Less than or Equal to:- -le
 Not Equal:- -ne,/!=
 Greeater than : -gt
 Less than : -lt
COMMENT  
# A sense of interpreting line by line
