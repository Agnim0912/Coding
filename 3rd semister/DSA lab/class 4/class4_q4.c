#include <stdio.h>
#include <stdlib.h>

struct node1{
    int num;
    struct node1 *next;
};
struct node1 *even=NULL, *tail;
struct node1 *odd=NULL;

void create()
{
    struct node1 *temp, *newnode;
    for(int i=1;i<21; i++)
    {
        if(i%2==0)
        {
            newnode=(struct node1*)malloc(sizeof(struct node1));
            newnode->num=i;
            if(even==NULL)
            {
                even=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
        }
    }
    tail=temp;
}

void c()
{
    struct node1 *temp, *newnode;
    for(int j=1;j<21; j++)
    {
        if(j%2==1)
        {
            newnode=(struct node1*)malloc(sizeof(struct node1));
            newnode->num=j;
            if(odd==NULL)
            {
                odd=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
        }
    }
}

void print()
{
    struct node1 *temp;
    temp=even;
    while (temp!=NULL)
    {
        printf("%d ", temp->num);
        temp=temp->next;
    }

    
}

void p()
{
    struct node1 *temp;
    temp=odd;
    while (temp!=NULL)
    {
        printf("%d ", temp->num);
        temp=temp->next;
    }
}

void concatenate()
{
    tail->next=odd;
}

/*void cdouble()
{
    struct node *temp, *newnode;
    newnode = (struct node1*)malloc(sizeof(struct node1));
    temp=even;
    while(temp!=NULL)
    {
        temp->next->
    }
}*/

int main()
{
    create();
    c();
    printf("Printing single linked list with even numbers: \n");
    print();
    printf("Printing single linked list with odd numbers: \n");
    p();
    concatenate();
    printf("Printing concatenated single linked list: \n");
    print();
    //cdouble();
}