#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int completed;
} Process;

void sortByArrivalTime(Process p[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].at > p[j + 1].at) {
                Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void Display(Process p[], int n) {
    float avg_tat = 0, avg_wt = 0;
    
    printf("\n+----------+----------+----------+----------+----------+----------+");
    printf("\n| Process  |    AT    |    BT    |    CT    |   TAT    |    WT    |");
    printf("\n+----------+----------+----------+----------+----------+----------+");
    
    for (int i = 0; i < n; i++) {
        printf("\n|    P%d    |    %d     |    %d     |    %d     |    %d     |    %d     |",
               p[i].id, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
        avg_tat += p[i].tat;
        avg_wt += p[i].wt;
    }
    
    printf("\n+----------+----------+----------+----------+----------+----------+");
    printf("\nAverage Turnaround Time: %.2f", avg_tat/n);
    printf("\nAverage Waiting Time: %.2f\n", avg_wt/n);
}

void SJF(Process p[], int n) {
    int currTime = 0;
    int CompletedProcess = 0;

    while (CompletedProcess < n) {
        int idx = -1;
        int minimumbursttime = __INT_MAX__;

        // Find process with minimum burst time that has arrived
        for (int i = 0; i < n; i++) {
            if (p[i].at <= currTime && !p[i].completed) {
                if (p[i].bt < minimumbursttime) {
                    minimumbursttime = p[i].bt;
                    idx = i;
                }
            }
        }

        if (idx != -1) {
            // Execute process
            currTime += p[idx].bt;
            p[idx].ct = currTime;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            p[idx].completed = 1;
            CompletedProcess++;
        } else {
            // No process available, increment time
            currTime++;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of processes (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("Invalid input! Number of processes should be between 1 and 10.\n");
        return 1;
    }

    Process processes[n];
    
    for (int k = 0; k < n; k++) {
        processes[k].id = k + 1;
        processes[k].completed = 0;
        
        printf("Enter Arrival Time and Burst Time for process P%d: ", k + 1);
        if (scanf("%d %d", &processes[k].at, &processes[k].bt) != 2 || 
            processes[k].at < 0 || processes[k].bt <= 0) {
            printf("Invalid input! Times must be non-negative and burst time must be positive.\n");
            return 1;
        }
    }

    sortByArrivalTime(processes, n);
    SJF(processes, n);
    Display(processes, n);
    
    return 0;
}