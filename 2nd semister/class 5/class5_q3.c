#include <stdio.h>

int main(void) {
  int num; scanf("%d",&num);
  int num2=(num%10)*1000+((num%100)/10)*100+((num%1000)/100)*10+((num%10000)/1000)*1;
  if(num==num2){printf("Same");}
  else{printf("Diffrent");}
  return 0;
}
