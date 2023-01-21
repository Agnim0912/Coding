#include<stdio.h>
int fn(int x,int y , int z);
int main()
{
    int x,y,z;
    printf("Enter the first number:\n");
    scanf("%d",&x);
    printf("Enter the second number:\n");
    scanf("%d",&y);
    printf("Enter the third number:\n");
    scanf("%d",&z);
    fn(x,y,z);
    return 0;
}
int fn(int x,int y , int z){
    int avg , max ,min ;
    avg=(x+y+z);
    printf("Average=%d\n",avg);
    if(x>y && x>z){
        printf("%d is the greatest\n",x);
    }
    else if (x>y && z>x){
        printf("%d is the greatest\n",z);
    }
    else if(y>x && y>z){
        printf("%d is the greatest\n",y);
    }
    else if (y>x && z>y){
        printf("%d is the greatest\n",z );
    }
    else if (y>z && x>y){
        printf("%d is the greatest\n",x);
    }
    else if(x>z && x>y){
        printf("%d is the greatest\n",x);
    }
    else if(x>z && y>x){
        printf("%d is the greatest\n",y);
    }
    else if(z>x && x>y){
        printf("%d is the greatest\n",z);
    }

    if(x<y && x<z){
        printf("%d is the smallest",x);
    }
    else if (x<y && z<x){
        printf("%d is the smallest",z);
    }
    else if(y<x && y<z){
        printf("%d is the smallest",y);
    }
    else if (y<x && z<y){
        printf("%d is the smallest",z );
    }
    else if (y<z && x<y){
        printf("%d is the smallest",x);
    }
    else if(x<z && x<y){
        printf("%d is the smallest",x);
    }
    else if(x<z && y<x){
        printf("%d is the smallest",y);
    }
    else if(z<x && x<y){
        printf("%d is the smallest",z);
    }

}