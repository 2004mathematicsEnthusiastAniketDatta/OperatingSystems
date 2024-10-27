#!/bin/bash
 
read -p "Enter the website you want to check for ping command: " site

ping -c 1 $site

if [ $? -eq 0 ]; then
  echo "Successfully connected to $site"
else
  echo "Unable to connect to $site"
fi