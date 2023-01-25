#include<stdio.h>
#include<limits.h>

int main()
{

    int task, machine;
    printf("\nEnter number of machines and tasks\n");
    scanf("%d%d", &machine, &task);


    int minMax[machine][task];
    int tmp[machine][task];
    int makespan = 0;

    printf("\n");
    for (int i = 0; i < machine; i++)
        for (int j = 0; j < task; j++)
        {
            printf("\nEnter the task time for machine %d ,task %d :",i+1,j+1);
            scanf("%d", &minMax[i][j]);
            tmp[i][j] = minMax[i][j];
        }

    printf("\nPrinting the data you entered :\n");

    for (int i = 0; i < machine; i++)
    {
        for (int j = 0; j < task; j++)
        {
           printf("%d\t", minMax[i][j]);
        }
            
        printf("\n");
    }

    int resultTask_1065[task];
    int resultMachine_1065[task];
    int resultTime_1065[task];

    int ptr = -1;

    while (ptr < task - 1)
    {
        int time[task], mac[task];
        for (int j = 0; j < task; j++)
        {
            int maximum = INT_MIN;
            int pos = -1;
            for (int i = 0; i < machine; i++)
            {
                if (minMax[i][j] > maximum)
                {
                    maximum = minMax[i][j];
                    pos = i;
                }
            }
            time[j] = maximum;
            mac[j] = pos;
        }

        int minimum = INT_MAX;
        int pos = -1;

        for (int j = 0; j < task; j++)
        {
            if (time[j] < minimum && time[j] != INT_MIN)
            {
                minimum = time[j];
                pos = j;
            }
        }

        resultTask_1065[++ptr] = pos;
        resultMachine_1065[ptr] = mac[pos];
        resultTime_1065[ptr] = tmp[mac[pos]][pos];
        if (minimum > makespan)
            makespan = minimum;

        for (int i = 0; i < machine; i++)
        {
            for (int j = 0; j < task; j++)
            {
                if (j == resultTask_1065[ptr])
                    minMax[i][j] = INT_MIN;
                else if (i == resultMachine_1065[ptr] && minMax[i][j] != INT_MIN)
                    minMax[i][j] += minimum;
                else
                    continue;
            }
        }
    }

    printf("\nScheduled Task are :\n");
    for (int i = 0; i < task; i++)
    {
        printf("\nTask %d Runs on Machine %d with Time %d units\n", resultTask_1065[i] + 1, resultMachine_1065[i] + 1, resultTime_1065[i]);
    }

    printf("\nTime Taken: %d units\n", makespan);
    return 0;
}