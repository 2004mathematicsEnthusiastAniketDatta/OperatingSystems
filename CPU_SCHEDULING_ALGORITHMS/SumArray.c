#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(){
int i,a[]={1,5,7,8,9};
int s=0;
printf("-----------------------------------------------------------------------------------------\n");
printf("\t Sum  of numbers in child and execution of Parent after the child \n");
printf("-----------------------------------------------------------------------------------------\n");
// create  new process by fork  and return the value in p
int p=fork();
pid_t id;
// if the returned value is negative value , unsucessful status -> failed to create a new process
if(p<0){
   printf("Failed to create a new process...\n");
   exit(0);
}
// if the returned value is equal to zero (checking child process)

else if(p==0)
{
  printf("Child process is calling.... \n");
  for(i=0;i<5;i++){
    s=s+a[i];
  }
printf("The result is:%d \n",s);
printf("The child process is completed with id %d.... \n",getpid());
}
// if the returned value is positive (checking parent process)
else{
    wait(NULL);
    printf("Parent process is calling wirh parent process id : %d \n",getppid());
}
return 0;
}
