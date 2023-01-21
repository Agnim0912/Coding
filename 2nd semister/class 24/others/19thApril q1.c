#include <stdio.h>
struct student
{
    int roll;
    char name[40];
    float cgpa;
};



int main()
{
    printf("Enter the roll no,name,cgpa :");
    struct student s;
    scanf("%d%s%f",&s.roll,s.name,&s.cgpa);
    printf("%d %s %f",s.roll,s.name,s.cgpa);

    return 0;
}