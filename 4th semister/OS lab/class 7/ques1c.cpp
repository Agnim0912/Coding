#include  <stdio.h> 
#include  <unistd.h> 
#include  <sys/types.h> 
int main ()
{
    for(int  i=0;i<2;i++)
    {
        int  temp=fork(); if(temp==0)
        {
            printf("%d  \n",getpid()); 
            return 0;
        }
    }
    int  temp=fork(); if(temp==0)
    {
        printf("%d\n",  getpid()); 
        int  temp=fork(); 
        if(temp==1)
        {
            printf("%d\n",getpid()); 
            return  0;
        }
        return  0;
    }
}
