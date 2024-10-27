#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// function returns string(character array) as a result
char * findPrime(int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(n%(i+1)==0)
         c++;
    }
    if(c==2)
          return "The given number is a prime number....\n";
    else
          return "The given number is NOT a prime.... \n";
}
int main(){
int r,ele;
//pipe descriptors
int p[2];
printf("-------------------------------------------------------- \n");
printf("\t Finding Prime Number Pipe \n");
printf("---------------------------------------------------------\n");
char buff[1024];

//create unnamed pipe using pipe system call

r=pipe(p);
if(r<0)
{
    printf("Failed to create an unnamed pipe....\n");
    exit(1);
}
char *msg="18";
//send single message (string type) to another process(one end).
write(p[1],msg,sizeof(msg));
printf("One Messsage is sent successfully....(Process 1)\n");
printf("--------------------------------------------------");
printf("Message from unnamed pipe: (Process 2) \n");
//read messages from  pipe (other end)
read (p[0],buff,sizeof(msg));
printf("Recieved data: %s \n",buff);
//convert recieved string data to integer
int num=atoi(buff);
//pass integer  number to function for the prime number detection
char *rs=findPrime(num);
printf("%s \n",rs);
return 99; 
}