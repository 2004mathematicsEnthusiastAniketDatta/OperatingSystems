#!/bin/bash
#script should be executing with sudo/root access

#User should provide atleast one arguement as username else guide him


# Function to check if user is root
check_root() {
    if [ $(id -u) -ne 0 ]; then
        echo "This script must be run as root."
        sudo $0
        exit
    fi
}

# Function to add a user
add_user() {
    echo "Enter the username you want to add:"
    read newuser
    useradd $newuser
    echo "User $newuser added successfully."
}

# Function to delete a user
delete_user() {
    echo "Enter the username you want to delete:"
    read deluser
    userdel $deluser
    echo "User $deluser deleted successfully."
}

# Function to list all users
list_users() {
    getent passwd | cut -d: -f1
}

# Main menu
while true
do
    clear
    echo "----------------- User Management Menu -----------------"
    echo "1. Add User"
    echo "2. Delete User"
    echo "3. List Users"
    echo "4. Exit"
    echo "--------------------------------------------------------"
    echo "Choose an option: "
    read choice

    case $choice in
        1) check_root; add_user;;
        2) check_root; delete_user;;
        3) check_root; list_users; echo "Press Enter to continue..."; read;;
        4) exit;;
        *) echo "Invalid option. Please choose again."; sleep 1;;
    esac
done
