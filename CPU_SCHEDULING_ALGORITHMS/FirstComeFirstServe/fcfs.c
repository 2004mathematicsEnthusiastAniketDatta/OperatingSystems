//Non-Preemptive algorithm -> ith process has to complete before the next process starts
// First Come First Serve  Scheduling Algorithm -> Follows First In First Out Principle,
// allocates the CPU to the processes in the order they are queued in the ready queue/ 
//importing header files
#include <stdio.h>
#include <stdlib.h>
//Maximum length of the arrays
#define SIZE 10
typedef struct{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
}Process;

void sortByArrivalTime(Process p[],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(p[j].at>p[j+1].at){
            Process temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }
}
}
void Display(Process p[],int n){
    printf("\n Process \t AT \t BT \t CT \t TAT \t WT \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n %d \t %d \t %d \t %d \t %d \t %d \t \n ",p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
    }
}

void fcfs(Process p[],int n){
    int currentTime=0;
    for (int i1 = 0; i1 < n; i1++)
    {
        if(p[i1].at>currentTime){
            currentTime=p[i1].at;
        }
        currentTime=currentTime+p[i1].bt;
        p[i1].ct=currentTime;
        p[i1].tat=p[i1].ct-p[i1].at;
        p[i1].wt=p[i1].tat-p[i1].bt;
    }
}
int main() {
   //Variables 
   //at[SIZE] -> arrival time
   //bt[SIZE]-> burst time
   //bt_copy[SIZE] -> burst time_copy
   //wt[SIZE]->waiting time
   //tat[SIZE] -> turn around time
   //completion[SIZE] -> completion time
   //i -> process number
   //count -> counter
   //timecnt -> time counter
   //n -> total number of processes
   //beg->beginning
   //avg->sum total of waiting time
   //totalt-> total time
    // int at[SIZE], bt[SIZE], bt_copy[SIZE];
    // int wt[SIZE], tat[SIZE], completion[SIZE];
    // int i, count = 0, timecnt = 0, n, beg = 0;
    // float avg = 0, totalt = 0;
    
    int n;
    printf("Enter the number of processes ");
    scanf("%d", &n);
    Process processes[n];
      for(int i=0;i<n;i++){
        processes[i].pid=i+1;
        printf("Enter the arrival time and burst time of Process %d",i+1);
        scanf("%d %d",&processes[i].at,&processes[i].bt);
      }
     sortByArrivalTime(processes,n);
     fcfs(processes,n);
     Display(processes,n);
     return 0;
}

