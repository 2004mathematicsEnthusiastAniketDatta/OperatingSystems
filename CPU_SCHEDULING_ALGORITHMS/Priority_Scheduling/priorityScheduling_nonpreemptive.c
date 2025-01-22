/* Priority (preemtive) CPU Scheduling Program in C */
#include <stdio.h>
#define SIZE 10

int main()
{
    int at[SIZE],bt[SIZE],bt_copy[SIZE],priority[SIZE];
    int wt[SIZE],tat[SIZE],completion[SIZE];
    int i,count=0,timecnt,n,beg=0,temp,smallest;
    float avg=0,totalt=0;
 
    printf("lowest numerical value is given the highest priority\n");
    printf("Enter the number of Processes(Maximum %d): ", SIZE-2);
    scanf("%d",&n);
    //Input details of processes
    for(i = 0; i < n; i++){
        printf("Enter Details of Process %d \n", i);
        printf("priority value(min 0): ");
        scanf("%d", &priority[i]);
        printf("Arrival Time: ");
        scanf("%d", &at[i]);
        printf("Burst Time  : ");
        scanf("%d", &bt[i]);
        bt_copy[i] = bt[i];
    }
    priority[SIZE-1]=9999;
    temp = SIZE-1;
    printf("\nGantt Chart Priority (preemtive) Scheduling\n");
    printf("time start to end => process number\n");
    for(timecnt=0; count!=n; timecnt++){
        // define the conditions
        smallest=SIZE-1;
        for(i=0; i<n; i++){
            if(at[i]<=timecnt && bt[i]>0 && priority[i]<priority[smallest]){
                smallest=i;
            }
        }
        bt[smallest]--;
        if (temp != smallest || bt[smallest]==0){
            printf("%2d to %2d => p%d\n",beg,timecnt+1,smallest);
            beg = timecnt+1;
        }
        temp = smallest;
        if(bt[smallest]==0){
            count++; //decrement the process no.
            completion[smallest] = timecnt+1;
            tat[smallest] = completion[smallest] - at[smallest];
            wt[smallest] = tat[smallest] - bt_copy[smallest];
        }
    }
    printf("pid   arrival  priority  burst  completion  turnaround  waiting");
    for(i=0;i<n;i++){
        printf("\n P%d %6d %9d %7d %9d %11d %10d",i, at[i], priority[i], bt_copy[i],completion[i],tat[i], wt[i]);
        avg = avg + wt[i];
        totalt = totalt + tat[i];
    }
    printf("\n\nTotal waiting time    = %6.3f",avg);
    printf("\nTotal Turnaround time = %6.3f", totalt);
    printf("\nAverage Waiting Time  = %6.3f", avg/n);
    printf("\nAvg Turnaround Time   = %6.3f", totalt/n);
    
    return 0;
}
