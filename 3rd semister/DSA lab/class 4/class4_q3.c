//WAP to modify the linked list such that all even numbers appear before all the 
//odd numbers in the modified linked list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *prev;
    int num;
    struct node *next;
};
struct node *head=NULL;

void insert()
{
    int n;
    struct node *temp, *newnode;
    while(n)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter a number: ");
        scanf("%d", &newnode->num);
        //fflush(stdin);
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
                temp->next=newnode;
                newnode->prev=temp;
                temp=newnode;
        }
        printf("Do you want to continue?(0/1)");
        scanf("%d", &n);
    }
}

void sort()
{
    struct node *temp, *newnode, *r;
    temp=head->next;
    while (temp!=NULL)
    {
        newnode=NULL;
        //newnode=(struct node*)malloc(sizeof(struct node));
        if((temp->num)%2==0)
        {
            newnode=temp->next;
            r=temp->prev;
            r->next=newnode;
            newnode->prev=r;

            temp->next=head;
            head->prev=temp;
            head=temp;
            temp=newnode;
        }
        else
        {
            temp=temp->next;
        }
    }
}

void print()
{
    struct node *temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d", temp->num);
        temp=temp->next;
    }
    
}

int main()
{
    int ch, end=1;
    while(end)
    {
        printf("1. Input nodes.\n");
        printf("2. For sorting even and odd numbers repestively.\n");
        printf("3. Print the list.\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                sort();
                break;
            case 3:
                print();
                break;
            default:
                printf("Invalid input");
        }
        printf("Continue(0/1)");
        scanf("%d", &end);
    }
}