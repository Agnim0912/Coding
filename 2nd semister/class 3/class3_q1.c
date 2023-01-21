#include<stdio.h>
int main(){
  char a=121;
  unsigned char b=126;
  short int c=313;
  unsigned short int d=145;
  int e=20;
  unsigned int f=97;
  long g=-60;
  unsigned long h=960;
  long long i=-350;
  unsigned long long j=189;
  float k=4.5;
  double l=129.88;
  long double m=909.79;
  printf("%c\n",a);
  printf("%d\n",b);
  printf("%hd\n",c);
  printf("%hu\n",d);
  printf("%d\n",e);
  printf("%u\n",f);
  printf("%ld\n",g);
  printf("%lu\n",h);
  printf("%lld\n",i);
  printf("%llu\n",j);
  printf("%f\n",k);
  printf("%lf\n",l);
  printf("%LF\n",m);
  return 0;
}

