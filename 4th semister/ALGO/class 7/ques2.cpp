#include<stdio.h> 
int main()
{
    int activities; 
    int x;
    printf("enter the no. of activities: "); 
    scanf("%d",&activities);
    int start[activities]; 
    printf("enter the start time: "); 
    for(x=0;x<activities;x++)
    {
        scanf("%d",&start[x]);
    }
    int finish[activities]; 
    printf("enter the finish time: "); 
    for(x=0;x<activities;x++)
    {
        scanf("%d",&finish[x]);
    }
    int i, j;
    printf ("Following activities are selected \t"); 
    i = 0;
    printf("a%d\t", i);
    for (j = 1; j < activities; j++)
    { 
        if (start[j] >= finish[i]){
            printf ("a%d\t ", j); i = j;
        }
    }
    return 0;
}
