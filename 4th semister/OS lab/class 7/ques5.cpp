#include<unistd.h> 
#include<sys/types.h> 
#include<stdio.h> 
#include<sys/wait.h> 
int main()
{
    pid_t  p;
    printf("before  fork\n"); 
    p=fork();
    if(p==0)
    {
        printf("Child  having  id  %d\n",getpid()); 
        printf("Parent  id  is  %d\n",getppid());
    }
    else
    {
        wait(NULL);
        printf("Child's  id  is  %d\n",p); 
        printf("Parent  having  id  %d\n",getpid());
    }
}
