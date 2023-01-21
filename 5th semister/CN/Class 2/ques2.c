#include<stdio.h>
#include<stdlib.h>

struct info{
    int roll_no;
    char name[50];
    double CGPA;
    struct info* next;
}*head=NULL;

int input(){
    int n=1;
    while(n){
        struct info *newnode, *temp;
        newnode = (struct info*)malloc(sizeof(struct info));

        printf("Enter Roll number: ");
        scanf("%d",&newnode->roll_no);
        fflush(stdin);
        printf("Enter Name: ");
        scanf("%s",&newnode->name);
        fflush(stdin);
        printf("Enter CGPA: ");
        scanf("%lf",&newnode->CGPA);
        fflush(stdin);
        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Continue?y/n: ");
        scanf("%d",&n);
    }
}

int print(struct info *p){
    struct info *temp;
    temp=p;
    while(temp!=NULL){
        printf("\nRoll number: %d\n", temp->roll_no);
        printf("Name: %s\n", temp->name);
        printf("CGPA: %lf\n", temp->CGPA);
        temp=temp->next; 
    }
}

int main(){
    input();
    print(head);
}   