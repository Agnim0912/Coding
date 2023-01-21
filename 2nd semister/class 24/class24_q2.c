#include <stdio.h>
struct student {
    int roll;
    char name[40];
    float sub[3];
};

int main()
{
    int i=0;
    float sum=0;
    struct student s;
    printf("Enter the roll no and name:");
    scanf("%d%s",&s.roll,s.name);
    printf("enter the marks of 3 subject:");
    for (i=0;i<3;i++)
    {    scanf("%f\n",&s.sub[i]);
        printf("%f\n",s.sub[i]);
        sum=sum+s.sub[i];
    }
    printf("%f",sum);
    float avreage =(sum/3);
    printf("The avreage is: %f",avreage);
}