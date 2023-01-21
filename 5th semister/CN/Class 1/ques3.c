#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll_no;
	char name[100];
	char branch[100];
	struct DOB
	{
		int day;
		char month[20];
		int year;
    }d;
    struct student* next;
}*head=NULL;

int input(){
    int n=1;
    while(n){
        
        struct student *newnode, *temp;
        newnode=(struct student*)malloc(sizeof(struct student));
        
        printf("Enter student roll number: ");
        scanf("%d",&newnode->roll_no);

        printf("Enter student name: ");
        scanf("%s",&newnode->name);

        printf("Enter student branch: ");
        scanf("%s",&newnode->branch);
        
        printf("Enter the date, month and year of birth respectively: \n");
	    scanf("%d",&newnode->d.day);
	    scanf("%s", &newnode->d.month);
	    scanf("%d", &newnode->d.year);

        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

        printf("Continue?");
        fflush(stdin);
        scanf("%d\n", &n);
    }
}

int print(){
    struct student *temp;
    temp=head;
    
    while(head!=NULL){
        printf("Student Roll Number: %d\n", temp->roll_no);
        printf("Student Name: %s\n", temp->name);
        printf("Student Branch: %s\n", temp->branch);
        printf("Day of Birth: %d\n", temp->d.day);
        printf("Month of Birth: %s\n", temp->d.month);
        printf("Year of Birth: %d\n\n", temp->d.year);
        temp=temp->next;
    }
}

int main(){
    input();
    print();
}