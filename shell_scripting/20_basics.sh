while true
do
  echo -e "\n\t Menu:"
  echo -e "\t -------"
  echo -e "\t 1.List Files and directories"
  echo -e "\t 2.Show current date and Time"
  echo -e "\t 3.Show Calender"
  echo -e "\t 4.Show user list"
  echo -e "\t 5. exit"
  echo -e " Enter your choice:"
  read choice

case $choice in 
    1)
           echo "Listed files and directories within the present working directory are:"
           ls
           ;;
    2)
           echo "Current Date and time:"
           date
           ;;
    3)
           echo "Showing current date and time"
           ncal
           ;;
    4)
           echo "User's list"
           w -h
           ;;
    5)     
           echo "Exiting..."
           exit
           ;;
    *)
           echo "Add a choice in the code and then try, if the choice is not correct, try again"
           ;;
esac
done