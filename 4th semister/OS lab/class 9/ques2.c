#include <stdio.h>  
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
int numChildProcesses = 1;
int testArray[4] = {2,7,9,4};

printf("Will use 1 child process; %d pipes.\n", numChildProcesses*2);
int fd[numChildProcesses*2][2]; 

int val = 0, len, i;

for (i=0; i<numChildProcesses*2; ++i) 
{
    if (pipe(fd[i]) < 0)
    {
        perror("Failed to allocate pipes.");
        exit(EXIT_FAILURE);
    }
}

for (i=0;i<numChildProcesses;i++)
{

    //CHILD/////////////////////////////////////////////////////////////////////
    if (fork() == 0)
    {
        int total = 0, xCount = 0;

        while (xCount < 4)
        {
            // wait for parent to send us a value
            len = read(fd[i][0], &val, sizeof(val));
            if (len < 0)
            {
                perror("Child: Failed to read data from pipe.\n");
                exit(EXIT_FAILURE);
            }
            else if (len == 0)
            {
                // not an error, but certainly unexpected
                fprintf(stderr, "Child: Read EOF from pipe\n");
            }
            else // Successfully read from Parent
            {
                total += val;
                xCount += 1;
                printf("Child: Recieved %d\tTotal: %d\tCount: %d\n", val, total, xCount);

            }
        }

        // send the value back to the parent
        printf("Child: Sending %d back\n", total);
        if (write(fd[i][1], &total, sizeof(total)) < 0)
        {
            perror("Child: Failed to write response value");
            exit(EXIT_FAILURE);
        }

        return EXIT_SUCCESS;
    }

    //PARENT/////////////////////////////////////////////////////////////////////
    if (fork() > 0)
    {
        int total = 0;

        // send array to child as well as starting point
        printf("\nParent: Sending numbers to child\n");
        //if (write(fd[i][1], 0, (fileNumbers/numChildProcesses)*5) != sizeof((fileNumbers/numChildProcesses)*5));
        if (write(fd[i][1], &testArray, sizeof(testArray)) != sizeof(testArray))
        {
            perror("Parent: Failed to send value to child ");
            exit(EXIT_FAILURE);
        }

        // now wait for a response
        len = read(fd[i][0], &val, sizeof(val));
        if (len < 0)
        {
            perror("Parent: failed to read value from pipe");
            exit(EXIT_FAILURE);
        }
        else if (len == 0)
        {
            // not an error, but certainly unexpected
            fprintf(stderr, "Parent: Read EOF from pipe\n");
        }
        else
        {
            total += val;
            printf("Parent: Received %d\tTotal: %d\n", val, total);
        }

        wait(NULL);
    }
}
}