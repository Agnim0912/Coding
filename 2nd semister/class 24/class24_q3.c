#include <stdio.h>
struct date {
    int date;
    int month;
    int year;
};
int main()
{
    struct date D[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the dd/mm/yyyy of the %d table: \n", i);
        scanf("%d%d%d", &D[i].date, &D[i].month, &D[i].year); 
    }
    for (i = 0; i < 2; i++)
    {
        printf("The dd/mm/yyyy of the %d table is: \n", i);
        printf("%d / %d / %d\n", D[i].date, D[i].month, D[i].year); 
    }
    if (D[0].year > D[1].year)
    {
        printf("1st table is later time period");
    }
    else if (D[0].year < D[1].year)
    {
        printf("2nd table is later time period");
    }
    else if (D[0].year == D[1].year && D[0].month > D[1].month)
    {
        printf("1st time observation is greater!");
    }
    else if (D[0].year == D[1].year && D[0].month < D[1].month)
    {
        printf("2nd time observation is greater!");
    }
    else if (D[0].year == D[1].year && D[0].month == D[1].month && D[0].date > D[1].date)
    {
        printf("1st time observation is greater!");
    }
    else if (D[0].year == D[1].year && D[0].month == D[1].month && D[0].date < D[1].date)
    {
        printf("2nd time observation is greater!");
    }
    return 0;
}