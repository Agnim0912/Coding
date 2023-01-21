#include  <stdio.h> 
#include  <unistd.h>
int main ()
{
    int  num;
    printf  ("Enter  the  Upper  limit  :  "); 
    scanf  ("%d",  &num);

    int  sum  =  0,  count  =  0;

    int  n;
    n = fork ();

    if (n > 0)
    {
        for  (int  i  =  0;  i  <  num;  i++)
        {
            count++;
            sum  =  sum  +  count;
        }
        printf  ("This  is  Parent  Process  \n:  "); 
        printf  ("Sum  of  numbers  is  %d  \n\n",  sum);
    }

    else
    {
        printf  ("This  is  Child  Process  :  \n");
        printf  ("Prime  numbers  between  0  to  %d  were  :  ",  num);
        int  i,  a  =  1,  count; while (a <= num)
        {
            count  =  0;
            i  =  2;
            while (i <= a / 2)
            {
                if (a % i == 0)
                {
                count++; break;
                }
                i++;
            }
            if  (count  ==  0  &&  a  !=  1)
            {
                printf  ("  %d  ",  a);
            } 
            a++;
        }
    }
    return  0;
}
