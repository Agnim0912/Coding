#include <stdio.h>

int main ()
{
  char str[100], revstr[100];
  int i, j, c = 0;
  printf ("Enter string:\t");
  scanf ("%[^\n]%*c", str);
  printf ("\nEntered String : %s", str);
  for (i = 0; str[i] != '\0'; i++)
    {
      c++;
    }
  j = c - 1;
  for (i = 0; i < c; i++)
    {
      revstr[i] = str[j];
      j--;
    }
  printf ("\nReversed String: %s\n", revstr);
  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == revstr[i])
	printf ("PALINDROME");
      else
	printf ("NOT PALINDROME");
      break;
    }
  return 0;
}