#include<stdio.h>
int main()
{

    int a[4][4];
    for (int i=0; i<4; i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Two Dimensional array elements:\n");
   for(int i=0; i<4; i++) {
      for(int j=0;j<4;j++) {
         printf("%d ", a[i][j]);
         if(j==3){
            printf("\n");
         }
      }
   }
  for(int i=0; i<4; i++) {
   int sum=0;
      for(int j=0;j<4;j++) {
         
         sum+=a[i][j];
        
         }
    printf("summation of the column %d is %d",i,sum);
            printf("\n");
      }
   for(int j=0; j<4; j++) {
   int sum2=0;
      for(int i=0;i<4;i++) {
         
         sum2+=a[i][j];
        
         }
    printf("summation of the rows %d is %d",j,sum2);
            printf("\n");
      }
   return 0;
}
    
