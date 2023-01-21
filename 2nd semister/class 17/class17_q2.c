#include <stdio.h>

int main ()
{
  int m, n;
  printf ("Enter number of rows:\n");
  scanf ("%d", &m);
  printf ("Enter number of coulumns:\n");
  scanf ("%d", &n);
  printf ("\n");
  int a[m][n];
  int b[m][n];
  int c[m][n];
  int i, j;
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  printf ("Enter value for a[%d][%d]:", i, j);
	  scanf ("%d", &a[i][j]);
	}
    }
  printf ("Two Dimensional array elements of A are:\n");
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  printf ("%d ", a[i][j]);
	  if (j == m)
	    {
	      printf ("\n");
	    }
	}
    }
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  printf ("Enter value for b[%d][%d]:", i, j);
	  scanf ("%d", &b[i][j]);
	}
    }
  printf ("Two Dimensional array elements of B are:\n");
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  printf ("%d ", b[i][j]);
	  if (j == m)
	    {
	      printf ("\n");
	    }
	}
    }
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  c[i][j] = 3 * a[i][j] + 4 * b[i][j] - 4 * a[i][j];
	}
    }
  printf ("Two Dimensional array elements of C are:\n");
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  printf ("%d ", c[i][j]);
	  if (j == m)
	    {
	      printf ("\n");
	    }
	}
    }
}