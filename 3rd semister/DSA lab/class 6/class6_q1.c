//Linear queue. Implement Linear Queue using array. Define the following functions 
//a. Enqeue b. De queue c. Printf d. QFull f. QEmpty
//g. return Rear h. return font 


#include <stdio.h>
#include <stdlib.h>
 
#define MAX 50
 
void insert();  
void delete();
void display();
void ReturnR();
void ReturnF();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void main()
{
    int choice;
    while (1)
    {
        printf("1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Print queue \n");
        printf("4.Print Rear \n");
        printf("5.Print Front \n");
        printf("6.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
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
            exit(0);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
 
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Full \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}

void ReturnR()
{
    printf("Rear:");
    printf("%d \n",queue_array[rear]);
}

void ReturnF()
{
    printf("Front:");
    printf("%d \n",queue_array[front]);
}