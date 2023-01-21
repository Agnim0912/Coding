#include <stdio.h>

int main()
{
   int count,sum,i,j=0;
   char a[5][5]={
                  {1,0,1,0,0},
                  {0,0,0,0,0},
                  {1,0,1,1,1},
                  {0,0,0,1,0},
                  {1,1,1,1,1}
                  
               };
   for(int i=0;i<5;i++)
   {
      for(int j=0;j<5;j++)
      {
      printf("%d\t",a[i][j]);
      }
      printf("\n");
   }

   for(int i=0;i<5;i++)
   {
      for(int j=0;j<5;j++)
      {
         count=sum=0;
         if(i-1>=0)
         {
            count++;
            sum+=a[i-1][j];
         }
         if(i-1>=0&&j+1<5)
         {
            count++;
            sum+=a[i-1][j+1];
         }

         if(i+1>=0&&j-1>=0)
         {
            count++;
            sum+=a[i-1][j-1];
         }

         if(j-1>=0)
         {
            count++;
            sum+=a[i][j-1];
         }

         if(j+1>=0)
         {
            count++;
            sum+=a[i][j+1];
         }

         if(i+1<5)
         {
            count++;
            sum+=a[i+1][j];
         }

         if(i+1<5 && j+1<5)
         {
            count++;
            sum+=a[i+1][j+1];
         }

         if(i+1>=0 && j-1>=0)
         {
            count++;
            sum+=a[i+1][j-1];
         }
         if(a[i][j]==0 && sum>0 && sum==count)
         printf("The position is: %d %d\n",i,j);
         if(a[i][j]==1 && sum==0 && sum==count)
         printf("The position is: %d %d\n",i,j);
      }
   }
}
