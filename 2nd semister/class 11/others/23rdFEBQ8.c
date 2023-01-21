#include<stdio.h>
int main()
{
    int inp,i,n,x=0,val=1,check=1,store,y=1;
    printf("\nEnter a number: ");
    scanf("%d",&inp);
    if(inp<0)
    {
        printf("\nError, enter a positive value\n\n\n");
    }
    else
    {
        store=inp;
        i=inp; //1
        for(;i>0;){
        i=i/10; //0
        x++; //1
    }
    if (x%2==0&&x!=2&&x!=0)
    {
        for(;check<=y;)
        {
            val=(x/2); //1
            y=val-1; //0
            store=store/10;
            check++;
        }
        store=store%100;
        printf("\nMiddle two digits are %d\n\n",store);
    }
    if (x==2)
    {
        printf("\nMiddle two digits are %d\n\n",inp);
    }
    if (x%2!=0)
    {
        for (;check<=val;){
        val=(x/2); //2
        store=store/10;
        check++;
    }
    if(store==0)
    {
        printf("\nMiddle digit is %d\n\n",inp);
    } 
    else 
    {
        store=store%10;
        printf("\nMiddle digit is %d\n\n",store);
    }
    }
    if (x==0)
    {
        printf("\nMiddle digit is %d\n\n",inp);
    }
    }
    return 0;
}
