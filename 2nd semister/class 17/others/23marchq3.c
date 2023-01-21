/* Write a program to display the border elements of the matrix*/
#include <stdio.h>
int
main ()
{
  int m, n, i, j;
  scanf ("%d %d", &m, &n);
  int a[m][n];
  printf ("Enter the values of the array\n");
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
	    {
	      printf ("%d", a[i][j]);
	      printf ("\t");
	    }
	  else
	    {
	      printf ("\t");
	    }
	}
      printf ("\n");
    }
}

