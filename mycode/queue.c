#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 5

// ------------------- Queue Implementation using static arrays --------------------------

int queue[CAPACITY];
int front = 0;
int rear = 0 ;

void insert(void);
void delete(void);
void traverse(void);

void main()
{
    int choice;

    while(1)
    {
        printf("1. \nInsert \n");
        printf("2. Delete\n");
        printf("3. Traverse \n");
        printf("4. Exit \n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: insert();
                    break;

            case 2: delete();
                    break;

            case 3: traverse();
                    break;

            case 4: exit(0);  

            default : printf("Invalid choice !!!!!");
                    break;      
        }
    }
}

void insert()
{
    if (CAPACITY == rear)
        printf("Queue is Full___\n");
    else 
    {
        int ele;
        printf("Enter the element to be inserted in the Queue: ");
        scanf("%d",&ele);

        queue[rear] = ele;
        rear++;
    }
}

void delete()
{
    if(front == rear)
        printf("Queue is Empty!!!\n");
    else 
    {
        printf("Deleted element %d :",queue[front]);
        int i;
        for(i = 0; i < rear-1 ; i++)
            queue[i] = queue[i+1];
        rear-- ;
    }
}

void traverse()
{
    if(front == rear)
        printf("Queue is Full ___\n");
    else 
    {
        int i;
        printf("Queue elements are : ");
        for (i = front ; i < rear ; i++)
            printf("%d\t",queue[i]);
    }
}
 