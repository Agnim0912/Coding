#include <stdio.h>

struct stu {
    int roll;
    char name[50];
    float cprog;
    float phy;
    float chem;
};
float avg (float x,float y,float z)
    {
        float c;
        c=(x+y+z)/3;
        return c;
    }

int main()
{
    float maxa,hcprog,hphy,hchem=0.0;
    struct stu st[4];
    printf("Enter the student details :\n");
    for (int i=0;i<4;i++)
    {
        printf("Enter your roll number :\n");
        scanf("%d",&st[i].roll);
        printf("Enter your name :\n");
        scanf("%s",&st[i].name);
        printf("Enter your computer programming marks :\n");
        scanf("%f",&st[i].cprog);
        printf("Enter your physics marks :\n");
        scanf("%f",&st[i].phy);
        printf("Enter your chemistry marks :\n");
        scanf("%f",&st[i].chem);
        float h=avg (st[i].cprog,st[i].phy,st[i].chem);
        //printf("%f\n",h);
        
        if (h>maxa)
            maxa=h;
        if (st[i].cprog>hcprog)
            hcprog=st[i].cprog;
        if (st[i].chem>hchem)
            hchem=st[i].chem;
        if (st[i].phy>hphy)
            hphy=st[i].phy;
    }
    printf("The maximum avg marks %f\n",maxa);
    printf("The maximum marks in computer programming is %f\n",hcprog);
    printf("The maximum marks in chemistry is %f\n",hchem);
    printf("The maximum marks in physics is %f\n",hphy);
    return 0;
}