#include <stdio.h>

int main()
{
    int a=10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    printf("The value of a is %d\n",*p);
    printf("The address of a is %p\n",p);
    printf("The value of p is %p\n",p);
    printf("The address of p is %p\n",q);
    printf("The required value is %p\n",*&p);
    printf("The value of q is %p\n",q);
    printf("The address of q is %p\n",&q);
    printf("The required value is %p\n",*q);
    printf("The required value is %d\n",**q);
    printf("The required value is %p\n",**&q);
}