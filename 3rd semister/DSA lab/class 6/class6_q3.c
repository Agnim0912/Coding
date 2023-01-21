//Circular Queue Implement Circular Queue using array.


#include <stdio.h>
#include <stdlib.h>

# define MAX 5

int cqueue_arr[MAX];
int front = -1;
int rear = -1;

void insert(int item)
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {
        printf("Queue Overflow \n");
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)
        rear = 0;
        else
        rear = rear+1;
    }
    cqueue_arr[rear] = item ;
}
void deletion()
{
    if(front == -1)
    {
        printf("Queue Underflown\n");
        return ;
    }
    printf("Element deleted from queue is : %d\n",cqueue_arr[front]);
    if(front == rear)
    {
        front = -1;
        rear=-1;
    }
    else
    {
        if(front == MAX-1)
        front = 0;
        else
        front = front+1;
    }
}
void display()
{
    int front_pos = front,rear_pos = rear;
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
    while(front_pos <= rear_pos)
    {
        printf("%d ",cqueue_arr[front_pos]);
        front_pos++;
    }
    else
        {
        while(front_pos <= MAX-1)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}

void ReturnR()
{
    printf("Rear:");
    printf("%d \n",cqueue_arr[rear]);
}

void ReturnF()
{
    printf("Front:");
    printf("%d \n",cqueue_arr[front]);
}

int main()
{
    int choice,item;
    do
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Print Queue\n");
        printf("4.Print Rear\n");
        printf("5.Print Front\n");
        printf("6.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
            printf("Input the element for insertion in queue : ");
            scanf("%d", &item);
            insert(item);
            break;
            case 2 :
            deletion();
            break;
            case 3:
            display();
            break;
            case 4:
            ReturnR();
            break;
            case 5:
            ReturnF();
            break;
            case 6:
            break;
            default:
            printf("Wrong choice\n");
        }
    }
    while(choice!=6);
    return 0;
}
void display(struct Queue* q)
{
    struct Queue* temp = q;
    while(temp->front->next!=temp->rear)
    {
        printf("%d ", temp->front->key);
        temp=temp->front->next;
    }
}