#!/bin/bash
# logical operators: &&,||,!

# condition1 && condition2 : If both conditions are true then the final result of the logical operation is true otherwise false
# condition1 || condition2:  If any of the conditions is true then true : concept of short circuiting applies in JAVA OOP PROGRAMMING LANGUAGE

# AND operator
read -p "Age: " age
read -p "Nationality: " country
read -p "Origin:" origin
Country=${country^^}
Origin=${origin^^}
echo "${Country}"
echo "${Origin}"
if [[ $age -ge 18 ]] && [[ Country=="INDIA" ]]
then
     echo "Eligible to vote."
else
     echo "Not eligible to vote!!"
fi

# OR operator
if [[ $age -ge 18 ]] && [[ Country=="INDIA" ]] || [[ Origin=="ASIA" ]]
then 
     echo "Eligible to Vote."
else
     echo "Not eligible to Vote!"
fi