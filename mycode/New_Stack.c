/*Stact implementation using static array*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 5    // pre-processor macro

int stack[CAPACITY], top = -1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);
void length(void);

void length()
{

}

void push(int element)
{
    if(isFull())
    {
       printf("Stack is full OR Stack Overflow !!!");
    }
    else 
    {
       top++;
       stack[top]=element;
       printf("%d element is pushed in the stack\n",element);
    }
}
int isFull()
{
    if(top == CAPACITY-1)
       return 1;
    else 
       return 0;
}


int pop()
{
    int ele;
    if(isEmpty())
    {
        return 0;
    }
    else 
    {
        ele = stack[top];     //return stack[top--];
        top--;
    }
    return top;
}
int isEmpty()
{
    if(top == -1)
        return 1;
    else 
        return 0;
}

void peek()
{
    if (isEmpty())
       printf(" Stack is Empty  \n");
    else 
       printf("Peek element of the stack is : %d\n",stack[top]);
}

void traverse()
{
    if (isEmpty())
       printf(" Stack is Empty  \n");
    else 
    {
        int i;
        printf("Stack elements are: \n");
        for(i = 0 ; i<=top ; i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}


void main()
{
    int choice , ele;

    while(1)
    {
        printf("1.PUSH \n");
        printf("2.POP \n");
        printf("3.PEEK \n");
        printf("4.TRAVERSE \n");
        printf("5.LENGTH \n");
        printf("6.QUIT \n");

        printf("Enter your choice:  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : printf("Enter the element to be pushed in stack :");
                     scanf("%d",&ele);
                     push(ele);
                     break;
            
            case 2 : ele = pop();
                     if(ele == 0)
                        printf(" Stack is underflow\n");
                     else 
                         printf(" Popped element is : %d",ele);
                     break;
            
            case 3 : peek();
                     break;

            case 4 : traverse();
                     break;

            case 5 : length();
                     break;

            case 6 : exit(0);

            default : printf("INVALID CHOICE!!!!!!!!");
                      break;
        }
    }
}