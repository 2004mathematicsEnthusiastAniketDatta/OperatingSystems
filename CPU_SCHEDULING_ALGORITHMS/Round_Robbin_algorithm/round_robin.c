#include <stdio.h>
#include <stdlib.h>
//Maximum length of the arrays
#define SIZE 10

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
    int at[SIZE], bt[SIZE], bt_copy[SIZE];
    int wt[SIZE], tat[SIZE], completion[SIZE];
    int i, count=0,flag=0, timecnt, n, beg = 0,tslot;
    float avg = 0, totalt = 0;
    
    
    printf("Enter the number of processes (Maximum %d):", SIZE - 2);
    scanf("%d", &n);

    // Input details of processes
    for (i = 0; i < n; i++) {
        printf("Enter Details of process %d \n", i);
        printf("Arrival Time:");
        scanf("%d", &at[i]);
        printf("Burst Time: ");
        scanf("%d", &bt[i]);
        bt_copy[i] = bt[i];  // copy burst time for later use
    }

    printf("Enter the time_slice:");
    scanf("%d",&tslot);
    printf("\n Gantt Chart for Round Robbin Algorithm scheduling \n :");
    printf("time start to end => process number \n");
    for(timecnt=0,i=0;count!=n;)
    {
             if(at[i]<=timecnt && bt[i]>0)
             {
                 if(bt[i]<=tslot)
                 {
                    timecnt=timecnt+bt[i];
                    bt[i]=0;
                    flag=1;
                 }
                 else{
                      bt[i]=bt[i]-tslot;
                      timecnt=timecnt+tslot;
                 }
                 printf("%2d to %2d:p%2d \n",beg,timecnt,i);
                 beg=timecnt;
             }
             if(bt[i]==0 && flag==1)
             {
                  count++;
                  completion[i]=timecnt;
                  tat[i]=completion[i]-at[i];
                  wt[i]=tat[i]-bt_copy[i];
                  flag=0;
             }
             if(i==n-1)
             {
                  i=0;
             }
             else
             {
             i++;
             }
    }
  printf("pid arrival burst completion turnaround waiting");
    for (i = 0; i < n; i++) {
        printf("\n P%d %6d %7d %9d %11d %10d", i, at[i], bt_copy[i], completion[i], tat[i], wt[i]);
        avg = avg + wt[i];
        totalt = totalt + tat[i];
    }

    printf("\n\n Total Waiting Time = %6.3f \n", avg);
    printf("\n Total Turnaround time = %6.3f \n", totalt);
    printf("\n Average Waiting Time = %6.3f \n", avg / n);
    printf("\n Average Turnaround Time = %6.3f \n", totalt / n);

    return 0;
}
