#include <stdio.h>

int main(void) {
  int num;
  scanf("%d",&num);
  num=num/100;
  printf("%d\n",num%10);
  num=num/10;
  printf("%d\n",num%10);
  num=num/10;
  printf("%d\n",num%10);
  return 0;
}