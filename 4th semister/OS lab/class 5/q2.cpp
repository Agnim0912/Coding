//RR scheduling
#include<iostream>
using namespace std;


void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum)
{
	int rem_bt[n];
	for (int i = 0 ; i < n ; i++)
		rem_bt[i] = bt[i];

	int t = 0;

	while (1)
	{
		bool done = true;

		for (int i = 0 ; i < n; i++)
		{
			if (rem_bt[i] > 0)
			{
				done = false;

				if (rem_bt[i] > quantum)
				{
					//printf("I: %d\n",i);
					t += quantum;
					//printf("1: %d\n", t);

					rem_bt[i] -= quantum;
					//printf("2: %d\n", rem_bt[i]);
				}

				else
				{
					//printf("R: %d\n", rem_bt[i]);
					t = t + rem_bt[i];
					//printf("value: %d\n", t);

					wt[i] = t - bt[i];
					rem_bt[i] = 0;
				}
			}
		}

		if (done == true)
		break;
	}
}


void findTurnAroundTime(int processes[], int n,int bt[], int wt[], int tat[])
{
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}


void findavgTime(int processes[], int n, int bt[],int quantum)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	findWaitingTime(processes, n, bt, wt, quantum);

	findTurnAroundTime(processes, n, bt, wt, tat);

	cout << "Processes "<< " Burst time "
		<< " Waiting time " << " Turn around time\n";

	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
			<< wt[i] <<"\t\t " << tat[i] <<endl;
	}

	cout << "Average waiting time = "
		<< (float)total_wt / (float)n;
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n;
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

	int burst_time[] = {3,4,3};

	int quantum = 2;
	findavgTime(processes, n, burst_time, 2);
	return 0;
}