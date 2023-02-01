//Implementing FCFS
#include<stdio.h>

void findWaitingTime(int processes[], int n,int bt[], int wt[])
{
    wt[0] = 0;
    for (int i = 1; i < n ; i++ )
        wt[i] = bt[i-1] + wt[i-1] ;
}

void findTurnAroundTime( int processes[], int n,int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}

void findavgTime( int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    findWaitingTime(processes, n, bt, wt);

    findTurnAroundTime(processes, n, bt, wt, tat);

    printf("Processes: ");
    for (int i=0; i<n; i++)
    {
        printf(" %d", (i+1));
    }
    printf("\nBurst Time: ");
    for (int i=0; i<n; i++)
    {
        printf(" %d", bt[i]);
    }
    printf("\nWaiting Time: ");
    for (int i=0; i<n; i++)
    {
        printf(" %d", wt[i]);
        total_wt+=wt[i];
    }
    printf("\nTurn Around Time: ");
    for (int i=0; i<n; i++)
    {
        printf(" %d", tat[i]);
        total_tat+=tat[i];
    }
    
    int s=(float)total_wt / (float)n;
    int t=(float)total_tat / (float)n;
    printf("\nAverage waiting time = %d",s);
    printf("\n");
    printf("Average turn around time = %d ",t);
}

int main()
{
    int num,val;
    printf("enter number of processes:");
    scanf("%d",&num);
    int processes[num];
    printf("enter processes:");
    for (int i=0; i<num; i++)
    {
        scanf("%d",&val);
        processes[i]=val;
    }
    int n = sizeof processes / sizeof processes[0];

    int burst_time[] = {};

    findavgTime(processes, n, burst_time);
    return 0;
}
