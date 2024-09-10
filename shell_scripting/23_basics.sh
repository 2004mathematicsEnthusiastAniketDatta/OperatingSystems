#!/bin/bash

# File Management Script

while true
do
    clear
    echo "File Management Script"
    echo "------------------------"
    echo "1. Create a new file"
    echo "2. Delete a file"
    echo "3. Copy a file"
    echo "4. Move a file"
    echo "5. List files in current directory"
    echo "6. Exit"
    echo "------------------------"

    read -p "Choose an option: " option

    case $option in
        1)
            read -p "Enter the filename: " filename
            touch $filename
            echo "File $filename created successfully."
            sleep 2
            ;;
        2)
            read -p "Enter the filename: " filename
            if [ -f $filename ]; then
                rm $filename
                echo "File $filename deleted successfully."
            else
                echo "File $filename does not exist."
            fi
            sleep 2
            ;;
        3)
            read -p "Enter the source filename: " source
            read -p "Enter the destination filename: " destination
            if [ -f $source ]; then
                cp $source $destination
                echo "File $source copied to $destination successfully."
            else
                echo "File $source does not exist."
            fi
            sleep 2
            ;;
        4)
            read -p "Enter the source filename: " source
            read -p "Enter the destination filename: " destination
            if [ -f $source ]; then
                mv $source $destination
                echo "File $source moved to $destination successfully."
            else
                echo "File $source does not exist."
            fi
            sleep 2
            ;;
        5)
            echo "Files in current directory:"
            ls
            sleep 5
            ;;
        6)
            echo "Exiting..."
            exit 0
            ;;
        *)
            echo "Invalid option. Please choose a valid option."
            sleep 2
            ;;
    esac
done
