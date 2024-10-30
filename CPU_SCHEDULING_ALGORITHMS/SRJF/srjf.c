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
    int i, count=0,temp=0, timecnt = 0, n, beg = 0,smallest,end;
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
  
    bt[SIZE-1]=9999; //last element of the burst time array is allocated to a huge burst time value which acts like a sentinel value to obtain the smallest burst time
    //smaller burst time => shorter job
    temp=SIZE-1;  
    printf("\n Gantt Chart for Shortest Job First Algorithm scheduling \n :");
    printf("time start to end => process number \n");
    for(timecnt=0;i=0,count!=n;timecnt++ )
    { // This for loop above is the core of the SJF algorithm. It iterates until all processes are completed (count!=n).
        smallest=SIZE-1;
        //iterator to check all the array elements of burst time to get the process with shortest burst time
        for ( i = 0; i < n; i++)
        {
                
    // Inside the loop, we find the process with the smallest burst time that has arrived and has not been completed yet (bt[i]>0). 
    //We assign its index to smallest.
    // We increment the time counter timecnt by the burst time of the smallest process, mark it as completed (bt[smallest] = 0), and print its execution interval in the Gantt chart.
    // We update the completion time, turnaround time, and waiting time for the completed process.
          if(at[i]<=timecnt && bt[i]>0 && bt[i]<bt[smallest]&&bt[i]!=bt[smallest])
          {
            smallest=i;
          } 
    }
        //for the increament in time , the burst time of the shortest job get decreamented 
        // for 1 milisecond (say) time , the burst time for the current process should get decreamented by 1 milisecond
        bt[smallest]--;
        if (temp!=smallest || bt[smallest]==0)
        {
            printf("%2d to %2d => p%2d \n",beg,timecnt+1,smallest);
             beg=timecnt+1;
        }

         temp=smallest;
        if (bt[smallest]==0)
        {
        count++;
        end=timecnt+1;
        completion[smallest]=end;
        tat[smallest]=completion[smallest] - at[smallest];
        wt[smallest]=tat[smallest]-bt_copy[smallest];
        }
    }
   
    printf("pid arrival time burst completion turn-around waiting");
    for ( i = 0; i < n; i++)
    {
        printf("\n P%d %6d %7d %9d  %11d %10d",i,at[i],bt_copy[i],completion[i],tat[i],wt[i]);
        avg = avg + wt[i];
        totalt=totalt +tat[i];
    }
    printf("\n\n Total Waiting Time = %6.3f \n", avg);
    printf("\n Total Turnaround time = %6.3f \n", totalt);
    printf("\n Average Waiting Time = %6.3f \n", avg / n);
    printf("\n Average Turnaround Time = %6.3f \n", totalt / n);
    return 0;
}
