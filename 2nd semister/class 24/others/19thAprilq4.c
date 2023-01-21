#include<stdio.h>
struct employee
{
  long empid;
  char empname[1000];
  float bs, da, hra;
};
int
main ()
{
  int n, i;
  float gs, total = 0.00;
  printf ("Enter no of Employees\n");
  scanf ("%d", &n);
  struct employee e[n];
  for (i = 1; i <= n; i++)
    {
      printf ("Enter %d employee id\n", i);
      scanf ("%ld", &e[i].empid);
      printf ("Enter employee name\n");
      scanf ("%s", e[i].empname);
      printf ("Enter basic salary,DA,HRA\n");
      scanf ("%f %f %f", &e[i].bs, &e[i].da, &e[i].hra);
      gs = e[i].bs + (0.1 * e[i].da) + (0.05 * e[i].hra);
      total = e[i].bs + e[i].da + e[i].hra;
      printf
	("\n EMPID: %ld \n NAME: %s\n Gross Salary: %f\n Total Amount: %f\n\n",
	 e[i].empid, e[i].empname, gs, total);
    }
  return 0;
}