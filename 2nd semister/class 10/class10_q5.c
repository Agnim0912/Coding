#include <stdio.h>

int main(){
    int input, input2, i;
    char choose;
    printf("enter a number: ");
    scanf("%d", &input);
    printf("enter 2nd number: ");
    scanf("%d", &input2);
    i = input;
    while (i <= input2) 
    {
		int j = 1;
		while (j <= i) 
        {
			int sq = j * j;
			if (sq == i) {printf("%d lies in between %d %d\n", j, input, input2);}
			j++;
		}

		i++;
	}    
}