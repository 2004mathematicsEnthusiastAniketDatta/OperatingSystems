//Non-Preemptive algorithm -> ith process has to complete before the next process starts
// First Come First Serve  Scheduling Algorithm -> Follows First In First Out Principle,
// allocates the CPU to the processes in the order they are queued in the ready queue/ 
//importing header files
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
    int i, count = 0, timecnt = 0, n, beg = 0;
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

    printf("\n Gantt Chart for FCFS scheduling \n :");
    printf("time start to end => process number \n");
   // Criteria: Arrival Time
   //time count is initially zero from where gantt chart starts, we have to iterate from zeroth proccess and count should not be equal to the total number of processes 
    for (timecnt = 0, i = 0; count != n;) {
        // Define the conditions
        //arrival time should be less than or equal to time count burst time of the process should be greater than zero
        if (at[i] <= timecnt && bt[i] > 0) {
            timecnt = timecnt + bt[i]; //add the burst time to the time count
            bt[i] = 0; // resetting burst time for the next process
            printf("%2d to %2d => p %d \n", beg, timecnt, i);
            beg = timecnt;//beggining point of the next process should pe the last calculated time count 
            count++;//counter
            completion[i] = timecnt; //completion time
            tat[i] = completion[i] - at[i]; // initialize tat
            wt[i] = tat[i] - bt_copy[i];    // calculate wt
            i = 0;
        } else {
            i++;
            if (i == n) {  // reset i to 0 if this exceeds n
                i = 0;
                timecnt++;
            }
        }
    }

    printf("pid arrival burst completion turnaround waiting");
    for (i = 0; i < n; i++) {
        printf("\n P%d %6d %7d %9d %11d %10d", i, at[i], bt_copy[i], completion[i], tat[i], wt[i]);
        avg = avg + wt[i];
        totalt = totalt + tat[i];
    }

    printf("\n\n Total Waiting Time = %6.3f", avg);
    printf("\n Total Turnaround time = %6.3f", totalt);
    printf("\n Average Waiting Time = %6.3f", avg / n);
    printf("\n Average Turnaround Time = %6.3f", totalt / n);

    return 0;
}

