#include <stdio.h>

int main(void) {
  int octal;
  int hexadecimal;
  scanf("%o",&octal);
  printf("Octal Value: %o\n",octal);
  scanf("%x",&hexadecimal);
  printf("Hexadecimal: %x",hexadecimal);

  return 0;
}