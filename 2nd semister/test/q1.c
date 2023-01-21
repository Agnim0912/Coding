#include<stdio.h>

struct Arry{
    long int old_no;
    long int new_no;
    int old_array[18];
    int new_array[18];
}arry;

int check(int arr[], int i)
{
    if ( arr[i] == arr[i-1]+arr[i+1] ){
        return 0;  
    } 
    if ( arr[i] == arr[i-1]*arr[i+1] ) {
        return 0;  
    } 
    if ( arr[i] == arr[i-1]/arr[i+1] ) {
        return 0;  
    } ;
    if ( arr[i] == arr[i-1]-arr[i+1] ) {
        return 0;  
    } 
    if ( arr[i] == arr[i+1]%arr[i-1] ){
        return 0;  
    } 
    return 1;
}

int main(){
    printf("Input old no: ");
    scanf("%lu",&arry.old_no);

    int size=0;
    long int temp = arry.old_no;
    while(temp!=0)
    {
        size++;
        temp/=10;
    }
    temp = arry.old_no;
    for ( int i=size-1; i>=0; i-- )
    {
        arry.old_array[i] = temp%10;
        temp/=10;
    }
    int in=1;
    arry.new_array[0]= arry.old_array[0];
    for ( int i=1; i<size-1; i++ ){
        if ( check(arry.old_array,i) )
            arry.new_array[in++]=arry.old_array[i];
            }
    arry.new_array[in++]= arry.old_array[size-1];
    printf("\n");
    long int mult =1;
    for ( int i=0; i<in; i++ )
    {
        printf("%d",arry.new_array[i]);
    }
}