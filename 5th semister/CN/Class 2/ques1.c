#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=243,b=20,temp;
    printf("Before swap: %d %d\n",a,b);
    int *p,*r;
    p=&a;
    r=&b;
    temp=*r;
    *r=*p;
    *p=temp;
    printf("After Swap: %d %d",a,b);
}