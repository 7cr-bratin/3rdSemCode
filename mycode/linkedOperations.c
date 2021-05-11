#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;   //if not assign still its default value is NULL  (GLOBAL VARIABLE)

int len;

void append(void);
void addAtBegin(void);
void addAtAfter(void);

int Length(void);
void Display(void);
void Delete(void);
void reverse(void);
void node_swap(void);

//----------Append-----------

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Entert node Data: ");
    scanf("%d", &temp->data);
    temp->link=NULL;

    if(root == NULL)   //List is empty
       root = temp ;
    else
      {
      struct node* p;
      p = root;
            
      while(p->link!=NULL)
       {
         p = p->link;
       }
       p->link = temp;
    }
}

//-------------- Length of the lists ----------------

int Length()
{
    int count = 0;
    struct node* temp;

    temp = root ;
     while(temp!=NULL)
     {
         count ++;
         temp = temp->link;
     }
     return count;
}

//--------------------- Display the elements ------------------

void Display()
{
    struct node* temp;
    temp = root ;

    if(temp == NULL) 
        printf("List is Empty\n\n\n");
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
     
}

//------------------ Add at Begin of list --------------------

void addAtBegin(void)
{
    struct node* temp;

    temp = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter the Data to insert at Begin: ");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if(root = NULL)
        root = temp;    
    else
    {
        temp->link = root;   // connecting right side first (rest nodes first)
        root = temp;         //then connecting left side ROOT node (root/start node)
    }
    
}

//------------------ Add Anywhere ------------------------

void addAtAfter(void)
{
    struct node* temp, *p;
    int loc , len , i = 1;
    printf("Enter location where to insert NODES : ");
    scanf("%d",&loc);
    len = Length();

    if(loc > len)
       printf("Location exceeds the nodes present!!!!!");
    else
    {
        p = root ;
        while (i < loc)
        {
           p = p->link;
           i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter new NODE data to be inserted at location %d : ",loc);
        scanf("%d",temp->data);
        temp->link = NULL;

        temp->link = p->link;         //connecting right side first (rest nodes first)
        p->link = temp;               //connecting left side second 
    }
    
}

//----------------- Delete --------------------

void Delete()
{
   struct node* temp;
   int loc;

   printf("Enter the locationn to be deleted : ");
   scanf("%d",&loc);

   if(loc > Length())
       printf("location exceeds the NODES!!!!");
   else if(loc == 1)
   {
      temp = root;  
      root = temp->link;
      temp->link = NULL;
      free(temp);
   } 
   else
   {
       struct node* p = root, *q;
       int i=1 ;

       while( i < loc-1)
       {
           p = p->link;
           i++;
       }
       q = p->link;
       p -> link = q ->link;
       q ->link = NULL;
        free(q);
   }
   
}

//----------------------- Reverse all the elements --------------------------------

void reverse()
{
    struct node* p, *q;
    int i, j, len = Length(), temp;
    i=0;
    j = len-1;
    p = q = root;
    while( i < j)
    {
        int k = 0;
        while( k < j)
        {
            q = q->link;
            k++;
        }
        temp = p->data;
        p->data = q->data;
        q->data = temp;
        i++;
        j--;
        p = p->link;          // moving in next node
        q = root;            // again from start coz q can't move backwards in single linked lists
    }
}

//------------------------------ :Swaping Nodes: ------------------------------------

void node_swap()
{

}

void main()
{
    int choice;
    while (1)
    {
        printf("Single linked list Operations: \n");
        printf("1.Append\n");
        printf("2.addAtBegin\n");
        printf("3.addAnywhere\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Reverse Elements\n");
        printf("8.Node swap\n");
        printf("9.Quit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:  append();
                 break;
        
        case 2:  addAtBegin();
                 break;

        case 3:  addAtAfter();
                 break;

        case 4:  len = Length();
                 printf("Length of link is = %d \n\n\n",len);
                 break;

        case 5:  Display();
                 break;

        case 6:  Delete();
                 break;  

        case 7: reverse();
                 break;

        case 8: node_swap();
                break;    

        case 9:  exit(1);
        
        default:  printf("---------- Invalid choice ---------\n\n");
        }
    }
}