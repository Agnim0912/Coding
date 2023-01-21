#include <stdio.h>

int main(void) {
  int num;
  scanf("%d",&num);
  printf("%d",num%10);
  num=num/10;
  printf("%d",num);
  return 0;
}