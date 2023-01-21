#include <stdio.h>
int main(){
  int num; scanf("%d",&num);
  int square=((num%10000)/1000)*10+(num%10)*1;
  //printf("%d\n",square);
  int var1=((num%1000)/100)*10+((num%100)/10)*1;
  //printf("%d",var1);
  if(square==(var1*var1)){printf("its a valid number");}
  else{printf("its not a valid number");}

}