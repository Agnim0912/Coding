#include <stdio.h>

int main ()
{
  int n, i, j, h, g, r, s;
  printf ("enter n:");
  scanf ("%d", &n);
  printf ("enter the values of the array");
  int a[n][n];
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++){
	      scanf ("%d", &a[i][j]);
      }
    }
  printf ("first part");
  for (int h = 0; h < n; h++)
    {
      for (int g = 0; g < n - h; g++)
	      printf ("%d\n", a[h][g]);
    }
  printf ("second part");
  for (int r = 0; r < n; r++)
    {
      for (int s = r; s < n; s++)
	      printf ("%d\n ", a[r][s]);
    }
  printf ("third part");
  for (int u = 0; u < n; u++)
    {
      for (int v = u; v < n; v++)
	      printf ("%d\n", a[u][v]);
    }
  printf ("fourth part");
  for (int d = n; d >= 0; d--)
    {
      for (int e = d; e <= n - d; e++){
	      printf ("%d", a[d][e]);
      }
    }
}