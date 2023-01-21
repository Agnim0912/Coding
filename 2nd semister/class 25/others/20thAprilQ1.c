#include <stdio.h>
struct pointer {
    int roll;
    int mark;
    int sem;
};

int main()
{
    struct pointer p;
    printf("Enter your values :");
    scanf("%d%d%d",&p.roll,&p.mark,&p.sem);
    struct pointer *i=&p;
    printf("The printed values :");
    printf ("%d %d %d",(*i).roll,(*i).mark,(*i).sem);

    return 0;
}