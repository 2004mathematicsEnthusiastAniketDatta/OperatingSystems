#SHIFT
#when we pass multiple arguements , we can shift
#A B C
#shift
#B C
# to create a user , provide username and description
 
echo "Creating User";
echo "Username is $1";
shift
echo "Description is $@";



#O/P:./36_basic.sh  aniketdatta  He needs to study
# here aniketdatta is the first arguement and remaining is the second arguement
