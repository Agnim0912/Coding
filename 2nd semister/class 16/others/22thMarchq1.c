#include <stdio.h>

int main() {
  int m,n;
  printf("Enter the value of row and col:-\n");
  scanf("%d%d",&m,&n);
  int arr[m][n];
  printf("Enter the element:-\n");
  for(int i=0; i < m; i++) {
    for(int j =0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
    printf("\n"); 
  }
   printf("\nElement tin Array ....\n");     
    for(int i=0;i<m;i++) {    
        printf("\n");    
        for (int j=0;j<n;j++)  {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
  
}