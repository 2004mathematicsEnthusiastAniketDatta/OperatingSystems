#sleep - to create delay between two executions ex: sleep 1s/1m
#exit - to stop a script at a point 
#exit status $? - gives you status of previous command if that was successful

if [[ $# -eq 0 ]];then
       
       echo "Please provide atleast one arguement";
       exit 1;
fi
echo "First arguement is $1";
echo "Second arguement is $2";

echo "All the arguements are - $@";
echo "Number of arguements are - $#";



