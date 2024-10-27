#include <unistd.h>
#include <stdio.h>
#define SIZE 10
int main(){
    fork();//2
    fork(); //2
    //2*2=4 times the process will execute
    //Creating a process with fork() and Total number of processes: 2*n 
    // #child processes:2*n-1
    //both the child and the parent caller process run simaltaneously
    printf(" 1.First come first serve \n 2.Shortest Job First \n 3.Priority Scheduling \n 4.Round-Robbin \n 5. Shortest Remaining Job first Scheduling \n");
    return 0; //newly created process is the child process identified by the return value 0 
    //the caller of the child process is the parent process
}
