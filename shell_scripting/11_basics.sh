#!/bin/bash

# Read basic salary from keyboard
echo -e "Enter Rajesh's basic salary: "
read basic

# Calculate dearness allowance (DA)
da=$(echo "scale=2; $basic * 0.52" | bc)

# Calculate house rent allowance (HRA)
hra=$(echo "scale=2; $basic * 0.15" | bc)

# Calculate contributory provident fund (CPF)
cpf=$(echo "scale=2; ($basic + $da) * 0.12" | bc)

# Calculate gross salary
gross=$(echo "scale=2; $basic + $da + $hra" | bc)

# Calculate take-home salary
take_home=$(echo "scale=2; $gross - $cpf" | bc)

# Print results
echo "Basic Salary: $basic"
echo "Dearness Allowance (DA): $da"
echo "House Rent Allowance (HRA): $hra"
echo "Contributory Provident Fund (CPF): $cpf"
echo "Gross Salary: $gross"
echo "Take-Home Salary: $take_home"