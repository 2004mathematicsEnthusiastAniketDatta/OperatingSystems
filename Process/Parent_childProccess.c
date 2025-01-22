#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>
int main(){
    __pid_t pid;
    pid=fork();
    if (pid<0){
        printf("Process cannot execute \n");
    }
    else if(pid==0){
        printf("Child Process is Calling\n");
        printf("Process ID of the Child Process= %d \n",getpid());
        printf("Returned value of the child process: %d \n",pid);

    }
    else {
        printf("Parent Process is Calling\n");
        printf("Process ID of the Parent Process= %d \n",getppid());
        printf("Returned value of the parent process: %d \n",pid);
    }
}
