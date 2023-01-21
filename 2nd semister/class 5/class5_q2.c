#include <stdio.h>

int last_two(int e, int f){
  if(e<f){return e;}
  else{return f;}
}


int first_three(int a, int b, int c){
  int newvar=last_two(a,b);

  if(newvar<c){return newvar;}
  else{return c;}
}


int main(void) {
  int a; scanf("%d",&a);
  int b; scanf("%d",&b);
  int c; scanf("%d",&c);
  int d; scanf("%d",&d);
  int e; scanf("%d",&e);
  int f; scanf("%d",&f);

  int var1=first_three( a,  b,  c);
  int var2= last_two( e,  f);
  
  if(var1<var2){ printf("Smallest is %d",var1);}
  else{ printf("Smallest is %d",var2);}
  
  return 0;
}