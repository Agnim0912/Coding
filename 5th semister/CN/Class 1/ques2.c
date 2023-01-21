#include<stdio.h>
#include<stdlib.h>

struct employee{
    int Employee_no;
    char name[100];
    double salary;
    double TA;
    double DA;
    struct employee* next;
}*head=NULL;

int input(double sum){
    int n=1;
    while(n){
        
        struct employee *newnode, *temp;
        newnode=(struct employee*)malloc(sizeof(struct employee));
        
        printf("Enter employee number: ");
        scanf("%d",&newnode->Employee_no);
        printf("Enter employee name: ");
        scanf("%s",&newnode->name);
        printf("Enter employee salary: ");
        scanf("%lf",&newnode->salary);
        
        sum+=newnode->salary;
        
        newnode->TA=(0.1)*(newnode->salary);
        newnode->DA=(0.12)*(newnode->salary);

        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

        printf("Continue?");
        scanf("%d", &n);
    }
    return sum;
}

int print(){
    struct employee *temp;
    temp=head;
    
    while(head!=NULL){
        printf("Employee number: %d\n", temp->Employee_no);
        printf("Employee name: %s\n", temp->name);
        printf("Employee salary: %lf\n", temp->salary);
        printf("TA: %lf\n", temp->TA);
        printf("DA: %lf\n", temp->DA);
        temp=temp->next;
    }
}

int main()
{
    double sum=0;
    sum=input(sum);
    printf("Total Amount %lf\n", sum);
    print();
}