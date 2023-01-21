#include <stdio.h>
int main(void) {
  int a=2; int b=3;
  int tmp=a;
  a=b;
  b=tmp;
  printf("%d,%d",a,b);
}

