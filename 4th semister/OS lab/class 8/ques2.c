#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>

int main(int argc, char *argv[]) 
{ 
    int fd[2];
    int childID = 0; 
    pipe(fd);
    for(int i=0;i<5;i++)
    {
    if (fork() != 0)
    {
    close(fd[0]); childID = 1;
    write(fd[1], &childID, sizeof(childID));
    printf("Parent(%d) send childID: %d\n", getpid(), childID); 
    close(fd[1]);
    childID++;
    }
    else if (fork()==0)
    {
    
    close(fd[1]);
    read(fd[0], &childID, sizeof(childID));
    printf("Child(%d) received childID: %d\n", getpid(), childID); 
    close(fd[0]);
    childID++;
    }
    }
    return 0;
}
