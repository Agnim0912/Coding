//2) Write a program to generate even number upto a range

#include <stdio.h>

int main(){
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
        else{
            continue;
        }
    }
}