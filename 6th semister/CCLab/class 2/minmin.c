#include<stdio.h>
#include<limits.h>

int main()
{
    int tasks,machines;
    printf("Enter machines and tasks :");
    scanf("%d",&machines);
    scanf("%d",&tasks);
    

    int system[machines][tasks];
    int makespan=0;
    int tmp[machines][tasks];

    printf("\n");
    for(int i=0;i<machines;i++)
    {
        for(int j=0;j<tasks;j++)
        {
              printf("\nEnter the task time for machine %d ,task %d :",i+1,j+1);
              scanf("%d",&system[i][j]);
        }
    }


    printf("Printing the data you entered :\n");
      for(int i=0;i<machines;i++)
    {
        for(int j=0;j<tasks;j++)
        {
             printf("%d\t",system[i][j]);
        }
        printf("\n");
    }

    int resultTask[tasks];
    int resultMachine[tasks];
    int resultTime[tasks];
    int ptr = -1;

    while (ptr < tasks - 1)
    {
        int time[tasks], machine[tasks]; 
        for (int j = 0; j < tasks; j++)
        {
            int minimum = INT_MAX;
            int pos = -1;
            for (int i = 0; i < machines; i++)
            {
                if (system[i][j] < minimum)
                {
                    minimum = system[i][j];
                    pos = i;
                }
            }
            time[j] = minimum;
            machine[j] = pos;
        }


        int minimum = INT_MAX;
        int pos = -1;

        for (int j = 0; j < tasks; j++)
        {
            if (time[j] < minimum)
            {
                minimum = time[j];
                pos = j;
            }
        }

        resultTask[++ptr] = pos;
        resultMachine[ptr] = machine[pos];
        resultTime[ptr] = tmp[machine[pos]][pos];
        if (minimum > makespan)
            makespan = minimum;


        for (int i = 0; i < machines; i++)
        {
            for (int j = 0; j < tasks; j++)
            {
                if (j == resultTask[ptr])
                    system[i][j] = INT_MAX;
                else if (i == resultMachine[ptr] && system[i][j] != INT_MAX)
                    system[i][j] += minimum;
                else
                    continue;
            }
        }
    }


    printf("\nScheduled Task are:\n");
    for (int i = 0; i < tasks; i++)
    {
        printf("\nTask % d Runs on Machine % d\n", resultTask[i] + 1, resultMachine[i] + 1);
    }

    printf("\nTime Taken: % d units\n", makespan);
    return 0;
}