#include <stdio.h>
typedef struct{
    int pid,at,bt,ct,tat,wt,priority,completed;
}Process;
void sortByArrivalTime(Process p[],int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(p[j].at>p[j+1].at){
                Process temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
void Display(Process p[],int n){
    float avg_tat=0,avg_wt=0;
    printf("\n+----------+----------+----------+----------+----------+----------+----------+");
    printf("\n| Process  |    AT    |    BT    | Priority |    CT    |   TAT    |    WT    |");
    printf("\n+----------+----------+----------+----------+----------+----------+----------+");
    for (int i = 0; i < n; i++)
    {
        printf("\n|    P%d    |    %d     |    %d     |    %d     |    %d     |    %d     |    %d     |",
               p[i].pid,p[i].at,p[i].bt,p[i].priority,p[i].ct,p[i].tat,p[i].wt);
        avg_tat+=p[i].tat;
        avg_wt+=p[i].wt;
    }
    printf("\n+----------+----------+----------+----------+----------+----------+----------+");
    printf("\nAverage Turnaround Time: %.2f",avg_tat/n);
    printf("\nAverage Waiting Time: %.2f\n",avg_wt/n);
}
void NonPreemptivePriorityScheduling(Process p[],int n){
    int currTime=0;
    int CompletedProcess=0;
    while (CompletedProcess<n)
    {
        int idx=-1;
        int maxPriority=-__INT_MAX__;
        for (int i = 0; i < n; i++)
        {
            if(p[i].at<=currTime && !p[i].completed){
                if(p[i].priority>maxPriority){
                    maxPriority=p[i].priority;
                    idx=i;
                }
            }
        }
        if(idx!=-1){
            p[idx].ct=currTime+p[idx].bt;
            p[idx].tat=p[idx].ct-p[idx].at;
            p[idx].wt=p[idx].tat-p[idx].bt;
            p[idx].completed=1;
            currTime=p[idx].ct;
            CompletedProcess++;
        }
        else{
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
        processes[k].pid = k + 1;
        processes[k].completed = 0;
        
        printf("Enter Arrival Time , Burst Time and Priority for process P%d: ", k + 1);
        if (scanf("%d %d %d", &processes[k].at, &processes[k].bt, &processes[k].priority) != 3) {
            printf("Invalid input! Please enter integer values for Arrival Time, Burst Time and Priority.\n");
            return 1;
        }
    }

    sortByArrivalTime(processes, n);
    NonPreemptivePriorityScheduling(processes, n);
    Display(processes, n);
    
    return 0;
}