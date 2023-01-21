#include <stdio.h>
#include <math.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int n)
{
    struct node *p, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void Display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void deleteAndInsert(int key)
{
    struct node *prev;
    struct node *firstClone,*second;
    prev=(struct node *)malloc(sizeof(struct node));
    prev=NULL;
    firstClone=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));

    firstClone=first;
    second=firstClone->next;
    while(firstClone!=NULL)
    {
        if(firstClone->data==key)
        {
            prev->next=second;
            firstClone->next=NULL;
            firstClone->next=first;
            first=firstClone;
            break;
        }
        else{
            prev=firstClone;
            firstClone=firstClone->next;
            second=firstClone->next;
        }
    }

    
}

int main()
{
    printf("enter number of elements in a linked list\n");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    create(a,n);
    printf("enter key\n");
    int key;
    scanf("%d",&key);
    deleteAndInsert(key);
    Display(first);

}