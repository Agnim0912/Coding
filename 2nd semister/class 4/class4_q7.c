#include<stdio.h>
int main(){
    int a,temp,temp1,b;
    scanf("%d",&a);
    temp = a%10;
    temp1 = (a%100)/10;
    b = a/100;
    printf("%d\n",b*100+temp*10+temp1);
    b = (a/100)%10;
    b*=10;
    b += (a/1000)%10;
    b*=10;
    b += (a/10000);
    printf("%d\n",b+temp*10000+temp1*1000);
    printf("%d",b+temp1*10000+temp*1000);
}