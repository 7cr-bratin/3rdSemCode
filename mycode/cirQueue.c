#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5
int cirqueue[size];

void insert(int);
void delete(void);
void traverse(void);

int front = -1;
int rear = -1;

void main()
{
    int choice, ele;
    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : printf("Enter the value to be inserted in  the queue: ");
                     scanf("%d",&ele);
                     insert(ele);
                     break;

            case 2 : delete();
                     break;

            case 3 : traverse();
                     break;
                     
            case 4 : exit(0);

            default :printf("Invalid choice!!\tPlease try again\n");
                    break;
        }
    }
}

void insert(int ele)
{
    if(front == rear+1 || (rear == size-1 )&&(front == 0))
        printf("Circular queue is Full___\n");
    
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        cirqueue[rear] = ele;
    }

    else if(rear == size-1)
    {
        rear = 0;
        cirqueue[rear] = ele;
    }

    else 
    {
        rear++;
        cirqueue[rear] = ele;
    }
}

void delete()
{
    int ele;
    if(front == -1 && rear == -1)
        printf("Queue is empty\n");
    
    else if(front == rear)
    {
        ele = cirqueue[front];
        printf("Element deleted : %d",ele);
        front = rear = -1;
    }

    else if(front == size-1)
    {
        ele = cirqueue[front];
        printf("Element deleted : %d",ele);
        front = 0;
    }
    else 
    {
        ele = cirqueue[front];
        printf("Element deleted : %d",ele);
        front++;
    }
}

void traverse()
{
    if(front == -1 && rear == -1)
        printf("Queue is Empty!!!!!\n");
    else if(rear >= front)
    {
        int i;
        for(i = front ; i <= rear ; i++)
        {
            printf("Elements in the circular queues are : %d\n", cirqueue[i]);                 
        }
    }

    else 
    {
        int  i = front;
        for(i = front ; i <= size - 1 ; i++)
        {
            printf("Elements in the circular queues are : %d\n", cirqueue[i]);
        }
       front=0;
       while(front<=rear)
       {
           printf("Elements in the circular queue are: %d",cirqueue[front]);
           front++;
       }
    }
}