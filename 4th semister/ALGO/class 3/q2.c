#include <stdio.h>
#include <stdlib.h>

struct Node{
    int d;
    struct Node* next;
};

void counter(struct Node *s,int num)
{
    int c=0,count=0;
    while(s!=NULL)
    {
        if(s->d==num)
        {
            count++;
        }
        s=s->next;
    }
    printf("\nThe number of times %d apperead in the linked list: %d",num,count);
}

int main()
{
    struct Node *head,*temp,*new_node;
    head=NULL;
    int c,i=1,num;
    printf("Enter the no. of nodes to be created:\n");
    scanf("%d",&c);
    while(i<=c)
    {
        new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ",i);
        scanf("%d", &new_node->d);
        new_node->next=0;
        if(head==NULL)
        {
            head=temp=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        i++;
    }
    temp=head;
     while (temp != NULL)
    {
        printf(" %d ", temp->d);
        temp = temp->next;
    }
    printf("\nEnter the element:");
    scanf("%d",&num);
    counter(head,num);
    return 0;
}