#include <stdio.h>
#include <stdlib.h>

struct node {
    int roll;
    char grade;
    int mark;
    struct node* next;
};
struct node* head = NULL;
  
void traverse()
{
    struct node* temp;
  
    if (head == NULL)
        printf("\nList is empty\n");
  
    else {
        temp = head;
        while (temp != NULL) {
            printf("Roll Number = %d\n", temp->roll);
            printf("Grade = %c\n", temp->grade);
            printf("Marks = %d\n", temp->mark);
            printf("\n\n");
            temp = temp->next;
        }
    }
}
  
void insert()
{
    int opt;
    struct node *temp, *newnode;
    while(opt)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Roll Number: ");
        scanf("%d", &newnode->roll);
        fflush(stdin);
        printf("Enter Grade: ");
        scanf("%c", &newnode->grade);
        printf("Enter Marks: ");
        scanf("%d", &newnode->mark);
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue?(0/1)");
        scanf("%d", &opt);
    }
}
  
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = (struct node*)malloc(sizeof(struct node));
  
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
  
    temp = head;
    newnode->roll = data;
    newnode->next = 0;
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
  
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
  
    if (head == NULL)
        printf("\nList is empty\n");
  
    else {
        printf("\nEnter position : ");
  
        scanf("%d", &pos);
        position = (struct node*)malloc(sizeof(struct node));
        temp = head;
  
        while (i < pos-1) {
            temp = temp->next;
            i++;
        }
  
        position = temp->next;
        temp->next = position->next;
  
        free(position);
    }
}

void updation()
{
    struct node *temp;
    int search;
    printf("Enter the roll number: ;");
    scanf("%d", &search);
    
    if(head==NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        temp = head;
        while(temp !=NULL)
        {
            if(temp->roll==search)
            {
                printf("Enter Roll Number: ");
                scanf("%d", &temp->roll);
                fflush(stdin);
                printf("Enter Grade: ");
                scanf("%c", &temp->grade);
                printf("Enter Marks: ");
                scanf("%d", &temp->mark);
            }
            temp=temp->next;
        }
    }
}

int main()
{
    int choice;
    while (1) {
        printf("1  To see list\n"); 
        printf("2  For insertion at heading\n");
        printf("3  For insertion at any position\n");
        printf("4  For deletion of element at any position\n");
        printf("5  For updation of elements as per roll number specified\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insert();
            break;
        case 3:
            insertAtPosition();
            break;
        case 4:
            deletePosition();
            break;
        case 5:
            updation();
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    printf("END");
    return 0;
}