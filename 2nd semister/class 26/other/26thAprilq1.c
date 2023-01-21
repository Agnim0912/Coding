#include <stdio.h>
struct stu {
    int roll;
    struct date {
        int dd;
        int mm;
        int yy;
    }dob,jd;
};

int main()
{
    struct stu s[2];
    printf("Enter student 1 details :");
    printf("Enter roll number :");
    scanf("%d",&s[0].roll);
    printf("Enter the dob  :");
    scanf("%d",&s[0].dob.dd);
    scanf("%d",&s[0].dob.mm);
    scanf("%d",&s[0].dob.yy);
    printf("Enter the joining date :");
    scanf("%d",&s[0].jd.dd);
    scanf("%d",&s[0].jd.mm);
    scanf("%d",&s[0].jd.yy);
    printf("Enter student 2 details :");
    printf("Enter roll number :");
    scanf("%d",&s[1].roll);
    printf("Enter the dob  :");
    scanf("%d",&s[1].dob.dd);
    scanf("%d",&s[1].dob.mm);
    scanf("%d",&s[1].dob.yy);
    printf("Enter the joining date :");
    scanf("%d",&s[1].jd.dd);
    scanf("%d",&s[1].jd.mm);
    scanf("%d",&s[1].jd.yy);
    int ageone=s[0].jd.yy-s[0].dob.yy;
    printf("The age of student 1 is %d",ageone);
    int agetwo=s[1].jd.yy-s[1].dob.yy;
    printf("The age of student 2 is %d",agetwo);
    if (ageone>agetwo)
        printf("Student 1 is elder");
    else 
        printf("Student 2 is elder");

    return 0;
}
