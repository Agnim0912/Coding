#include <stdio.h>
struct pointer {
    float markone;
    float marktwo;
    float markthree;
};
float avg(struct pointer y)
{
    float c;
    c=(y.markone+y.marktwo+y.markthree)/3;
    return c;
}

int main()
{
    struct pointer p;
    printf("Enter your values :");
    scanf("%f%f%f",&p.markone,&p.marktwo,&p.markthree);
    
    float res=avg(p);
    printf("The average is %f",res);
    
    return 0;
}