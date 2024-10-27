#/dev/null -> in case we don't want to print the output of a command
# redirecting the output to >> /dev/null
#command > /dev/null
#cd /root &> /dev/null

ping localhost.com > dev/null
ping meta.ai > FILE2.log

#printing the name of the script 

echo "the name of the script is: ${0}";

#logger 
#If you want to maintain the logging for your script , you can use logger in your script.
# You can find the logs under /var/logs/messages
#Example:#logger "Hello world";

logger "log from ${0}" 

#debugging scripts
set -x;

