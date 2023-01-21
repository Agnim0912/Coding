#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
enum type
{
	partTime,
	fullTime
};
struct employee
{
    	int id;
    	union 
    	{
    		struct date d;
    		int age;
    	} dob;
    	int dobType;
	enum type t;
} e[3];
int main() 
{
	int i;
	printf("Enter Information of Employees:\n\n");
    	for(i = 0; i < 3; i++) 
    	{
        	printf("Enter Employee ID: ");
        	scanf("%d", &e[i].id);
        	printf("\nFor Date of Birth - Enter 0\nFor Age - Enter 1\n\nEnter Your Choice: ");
     		scanf("%d", &e[i].dobType);
        	if(e[i].dobType == 0)
        	{
        		printf("\nEnter Date of Birth: ");
			scanf("%d", &e[i].dob.d.dd);
			scanf("%d", &e[i].dob.d.mm);
			scanf("%d", &e[i].dob.d.yy);
		}
        	else
        	{
        		printf("\nEnter Age: ");
			scanf("%d", &e[i].dob.age);
		}
	        printf("\nPart-Time - Enter 0\nFull-Time - Enter 1\n\nEnter Employment Type: ");
		scanf("%d", &e[i].t);
        	printf("\n");
    	}
 	printf("\nInformation of Employees:\n\n");
    	for(i = 0; i < 3; i++) 
    	{
        	printf("Employee ID: %d\n", e[i].id);
        	if(e[i].dobType == 0)
			printf("Date of Birth: %d/%d/%d\n", e[i].dob.d.dd, e[i].dob.d.mm, e[i].dob.d.yy);
		else
			printf("Age: %d\n", e[i].dob.age);
		if(e[i].t == partTime)
			printf("Employment Type: Part-Time\n");
		else
			printf("Employment Type: Full-Time\n");
        	printf("\n");
    	}
	return 0;
}