/*FCFS CPU SCHEDULING PROGRAM IN C*/
//at-> arrival time
//bt -> burst time
//bt_copy -> burst_time array copy array
//wt -> waiting time
//tat -> turn around time
//completion -> completion time
#include <stdio.h>
#define SIZE 10
int main(){
    int at[SIZE],bt[SIZE],bt_copy[SIZE];
    int wt[SIZE],tat[SIZE],completion[SIZE];
    int i,count=0,timecnt,n,beg=0;
    float avg=0,totalt=0;

    printf("Enter the number of processes (Maximum %d):",SIZE-2);
    scanf("%d",&n);
    //Input details of processes
    for(i=0;i<n;i++){
        printf("Enter Details of processes %d \n",i);
        printf("Arrival ")
    }
}