#include <stdio.h>

int main(){
    float sum=0,n=1,i,x,check,val,error=0,fac,flag;
    printf("Enter n (positive value):");
    scanf("%f",&val);
    if (val<=0){
        printf("Value has to be greater than 0\n");
        error=1;
    } 
    else 
    {
        for(;n<=val;){ 
            fac=2*n;
            x=fac*(fac-1);
            i=fac-1;
            for(;i>1;)
            {
                x=x*(i-1);
                i=i-1;
            }
            check=x;
            flag=(n/x);
            sum=sum+(n/x);
            n++;
        }
        printf("Answer is %f\n",sum);
    }
}
