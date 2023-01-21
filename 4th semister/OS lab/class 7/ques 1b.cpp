#include  <stdio.h> 
#include  <unistd.h> 
#include  <sys/types.h> 
int main()
{
    pid_t  pid1,  pid2,  pid3,  pid4;
    printf  ("Parent[P1]  of  all:  %d\n",  getpid  ()); 
    pid1 = fork();
    if (pid1 == 0)
    {
        printf  ("Child[P2]  with  id:  %d  and  it's  Parent  id:  %d\n",  getpid  (), getppid  ());
        pid2 = fork ();
        if  (pid2  ==  0)
        {
            printf  ("Child[P4]  with  id:  %d  and  it's  Parent  id:  %d\n",  getpid  (), getppid  ());
        }
    }
    if (pid1 > 0)
    {
        pid3 = fork (); if  (pid3  ==  0)
        {
            printf  ("Child[P3]  with  id:  %d  and  it's  Parent  id:  %d\n",  getpid  (), getppid  ());
            pid4 == fork (); if  (pid4  ==  0)
            {
                printf  ("Child[P5]  with  id:  %d  and  it's  Parent  id:  %d\n", getpid (), getppid ());
            }
        }
    }
}
