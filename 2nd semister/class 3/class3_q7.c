#include <stdio.h>

int main(void) {
  int x=2;
  int y=3;
  int z=4;
  int tmp2=y;
  int tmp1=x;
  x=z;
  y=tmp1;
  z=tmp2;
  printf("x=%d y=%d z=%d",x,y,z);
}