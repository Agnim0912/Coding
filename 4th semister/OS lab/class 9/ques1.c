#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int p1 ;
    int p2 ;
    int p3 ;
    int p4 ;
    int p5 ;
    int p6 ;

    p2=fork();

    if (p2 == 0) 
    {
        p4= fork();
        
                if(p4==0)
                    printf("%d: p1\n", getpid());
                
    
        else
        {
            p5=fork();
            if(p5==0)
                printf("%d: p1\n", getpid());

            else
            {
            
                    printf("%d: p1\n", getpid());
            }
        
        }
    }
    else
    {
        p3=fork();
        if(p3==0){
            p6=fork();
            if(p6==0)
                printf("%d: p1\n", getpid());
            else
                printf("%d: p1\n", getpid());
        }
        else
            printf("%d: p1\n", getpid());
     
    }
    return 0;
}