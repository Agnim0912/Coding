//WAP to remove the duplicates in a sorted double linked list.

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

void removeDuplicateNode() 
{  
    struct node *current, *index, *temp;  
      
    if(head == NULL) 
    {  
        return;  
    }  
    else {  
        for(current = head; current != NULL; current = current->next) 
        {  
            for(index = current->next; index != NULL; index = index->next) 
            {  
                if(current->num == index->num) 
                {  
                    temp = index;  
                    index->prev->next = index->next;  
                    
                    if(index->next != NULL)  
                    {
                        index->next->prev = index->prev;  
                    }
                    temp = NULL;  
                }  
            }  
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
        printf("2. For removing duplicate elements.\n");
        printf("3. Print the list.\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                removeDuplicateNode();
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