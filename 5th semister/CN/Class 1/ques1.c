#include<stdio.h>
#include<stdlib.h>

struct product{
    int product_no;
    char name[100];
    int price;
    struct product* next;
}*head=NULL;

void input()
{
    int n=1, total=0;
    while(n){
        struct product *newnode, *temp;
        newnode = (struct product*)malloc(sizeof(struct product));
        
        printf("Enter product number: ");
        scanf("%d", &newnode->product_no);
        fflush(stdin);
        printf("enter name: ");
        scanf("%s", &newnode->name);
        fflush(stdin);
        printf("enter price: ");
        scanf(" %d", &newnode->price);
        
        total+= newnode->price;
        
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("continue?");
        scanf("%d",&n);
    }
    printf("Total Amount: %d",total);
    struct product* temp;
    temp=head;
    while(temp!=NULL){
        printf("\nProduct Number: %d\n", temp->product_no);
        printf("Name: %s\n", temp->name);
        printf("Enter Price: %d", temp->price);
        temp=temp->next;    
    }
}

int main()
{
    input();
}