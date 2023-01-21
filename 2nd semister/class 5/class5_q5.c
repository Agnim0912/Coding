#include<stdio.h>
int main()
{
  int a,x,y,z,m;
  printf("enter the number:");
  scanf("%d",&a);
   x=a%10;
  a=a/10;
  y=a%10;
  a=a/10;
  z=a%10;
  a=a/10;
  int middle=z*10+y;
  m=a*10+x;
   int rm=x*10+a;
  int c=(middle==m)?1:((middle==rm)?1:0);
  if(c==1){
    printf("Valid");
  }
  else if(c==0){
    printf("not valid");
  }
  return 0;
  }
