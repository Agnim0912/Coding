#include<stdio.h>
#include<stdlib.h>

int main(){
    int x=1;
    char *p = &x;
    if(*p==1){
        printf("Little Endian\n");
    }
    else{
        printf("Big Endian");
    }
}