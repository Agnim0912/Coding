#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a[10]="hello!";
    printf("%d\n",sizeof(a));
    printf("%d\n",strlen(a));
    printf("%s",a);
}