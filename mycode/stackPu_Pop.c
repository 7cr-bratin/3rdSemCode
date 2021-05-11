#include<stdio.h>
#define Max 15
#include<stdlib.h>

void push(int stack[], int *Top ,int val)  // -----PUSH an Element-----
{
    if( *Top < Max )
    {
         *Top = *Top + 1;
         stack[*Top] = *Top;
    }
    else
    {                                                                     //--------------:Program Implements a STACK using Array:---------------
        printf("-----:stack overflow:---------");
        exit(0);
    }
}

void pop(int  stack[], int *Top, int *val)  // ----POP an Element-----
{
    if(*Top >= 0)
    {
        *val = stack[*Top];
        *Top = *Top - 1;
    }
    else
    {
        printf("------:Stack Underflow :-----");
    }
}

void main()
{
    int stack[Max];
    int n,val;
    int Top=-1;
    do
    {
    do
    {
        printf("Enter the element to be pused in\n");
        scanf("%d",&val);
        push(stack, &Top, val);
        printf("To continue Enter 1:\n");
        scanf("%d",&n);
    }while (n == 1);
    printf("To pop an Element Enter 1\n");
    scanf("%d",&n);
    while( n == 1 )
    {
        pop(stack, &Top, &val);
        printf("The value POPED is %d:\n ",val);
        printf("To pop an Element Enter 1:\n");
        scanf("%d",&n);
    }
    printf("To continue Enter 1\n:");
    scanf("%d",&n);
    } while (n==1);
    
}