#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch,ch2,ch3,ch4;
    int x = 40;
    char *p;
    p = &x;
    ch=*p;
    ch2=*(p+1);
    ch3=*(p+2);
    ch4=*(p+3);
    printf("ch: %d\n",ch);
    printf("ch2: %d\n",ch2);
    printf("ch3: %d\n",ch3);
    printf("ch4: %d\n",ch4);
}