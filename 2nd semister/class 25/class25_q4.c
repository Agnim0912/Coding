#include <stdio.h>
struct student {
    int roll;
    int sem;
    char name[20];
    float sub[3];
    
};
float avg(struct student y)
{
    float c;
    c=(y.sub[0]+y.sub[1]+y.sub[2])/3;
    return c;
}

int main()
{
    struct student x={2028104,2,"RAJNISH",{13,15,17,}};
    float res=avg(x);
    printf("THe details are :\n");
    printf("%d %d %s %f",x.roll,x.sem,x.name,res);
}