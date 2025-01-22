#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    int pid;
    int size;
    int arr[size];
    int sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the element:");
    for(int a=0;a<size;a++){
        scanf("%d",&arr[a]);
    }
    pid=fork();
    if(pid < 0){
        printf("Process Creation Failed\n");
        exit(0);
    }
    else if(pid==0){
        printf("Child Process is running with Process ID: %d and Returned Value: %d \n",getpid(),pid);
        for(int i=0;i<size;i++){
            sum=sum+arr[i];
        }
        printf("The sum of the elements of the Array is = %d \n",sum);
        printf("Child process is executed\n");
    }
   else{
        pid=wait(NULL);
        printf("Parent Process is running with Process ID: %d and Returned Value: %d \n",getppid(),pid);
   }
     return -1;
   }
