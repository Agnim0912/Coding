#include <stdio.h>

void scanMatrix(int arr[][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}
void printMatrix(int a[][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        printf("|");
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

void addMatrix(int a[][10], int b[][10], int r, int c)
{   
    int res[10][10];
    printf("Adding two matrix\n\n");
    printMatrix(a, r, c);
    printf("    (+) \n\n");
    printMatrix(b, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("Addition of two matrix is : \n");
    printMatrix(res,r,c);
}

void subMatrix(int a[][10], int b[][10], int r, int c)
{   
    int res[10][10];
    printf("Subtracting two matrix\n\n");
    printMatrix(a, r, c);
    printf("    (-) \n\n");
    printMatrix(b, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j]=a[i][j]-b[i][j];
        }
        
    }
    printf("Subtracting of two matrix is : \n");
    printMatrix(res,r,c);
}

void mulMatrix(int a[][10], int b[][10], int r, int c)
{   
    int res[10][10];
    printf("Multiplication two matrix\n\n");
    printMatrix(a, r, c);
    printf("    (*) \n\n");
    printMatrix(b, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j]=a[i][j]*b[i][j];
        }
        
    }
    printf("Multiplication of two matrix is : \n");
    printMatrix(res,r,c);
}
int main()
{
    int r, c;
    printf("Enter the number of rows and column u want to create\n");
    scanf("%d %d", &r, &c);
    int a[10][10];
    int b[10][10];
    int res[10][10];
    printf("Enter the first matrix\n");
    scanMatrix(a, r, c);
    printf("Enter the second matrix of same number of columns and rows\n");
    scanMatrix(b, r, c);

    addMatrix(a, b, r, c);
    subMatrix(a, b, r, c);
    mulMatrix(a, b, r, c);
}
