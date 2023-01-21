#include<stdio.h>
#include<stdlib.h>

struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};

int main(){
    
    struct pkt *newnode;
    newnode=(struct pkt*)malloc(sizeof(struct pkt));

    int x=32758275;
    printf("Original Number: %d\n",x);
    char *p;
    p=&x;
    newnode->ch1=*p;
    newnode->ch2[0]=*(p+1);
    newnode->ch2[1]=*(p+2);
    newnode->ch3=*(p+3);
    printf("ch1: %d\n",newnode->ch1);
    printf("ch2[0]: %d\n",newnode->ch2[0]);
    printf("ch2[1]: %d\n",newnode->ch2[1]);
    printf("ch3: %d\n",newnode->ch3);
    int y=0;
    char *q;
    q=&y;
    *q=newnode->ch1;
    *(q+1)=newnode->ch2[0];
    *(q+2)=newnode->ch2[1];
    *(q+3)=newnode->ch3;
    printf("Aggregated number: %d",y);
}