#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;
};
struct node* root= NULL;

int len;

void Append(void); 
void addAtBegin(void);
int Length(void);
void addNodeAfter(void);
void Display(void);
void Delete(void);
void reverse(void);
void node_swap(void);

   //-------------- Add element at the end ------------------

void Append()
{
   struct node* temp;
    
   temp = (struct node*)malloc(sizeof(struct node));
   printf("Enter the data: ");
   scanf("%d",&temp->data);
   temp->right = NULL;
   temp->left = NULL;

   if(root == NULL)
       root = temp;
   else
   {
       struct node* p;
       p = root;
       while(p->right!=NULL)
           p = p->right;
       p->right = temp;
       temp->left = p;         
   }
   
}

   // ---------------------- :Add at the beggning: ----------------------

void addAtBegin()
{
       struct node* temp;
       temp = (struct node*)malloc(sizeof(struct node));

       printf("Enter the node data to insert at begining: ");
       scanf("%d",&temp->data);
       temp->left = NULL;
       temp->right = NULL;

       if(root == NULL)
           root = temp;
       else
       {
              temp->right = root;    //connectinng right side 
              root->left = temp;     //connecting left side
              root = temp; 
       }
}

     //------------------------ : Length of the list: -------------------------

int Length()
{
       struct node* temp = root;
       int count = 0;

       while(temp!=NULL)
       {
              count++;
              temp = temp->right;
       }
       return count;
}

    // -------------------- :Add node after specified node: -------------------

void addNodeAfter()
{
    struct node* temp , *p;
    int loc , i = 1;
    printf("Enter the location to add the node: ");
    scanf("%d",&loc);

    if(loc > Length())
    {
       printf("INVALID LOCATION \n");
       printf(" List contains only %d nodes ." ,Length());
    }
    else
    {
       temp = (struct node*)malloc(sizeof(struct node));
       printf("Enter the node data: ");
       scanf("%d",&temp->data);
       temp->left = NULL;
       temp->right = NULL;
       p = root;

       while( i < loc)
       {
              p = p->right;
              i++;
       }
       temp->right = p->right;       // connecting the right nodes first
       p->right->left = temp;

       temp->left = p;                //Then connectiong the left nodes
       p->right = temp;
    }
    
}

        //-----------------: Delete :------------------------------

void Delete()
{
       struct node* temp;
       int loc ;
       printf("Enter location  to be deleted : ");
       scanf("%d",&loc);

       if(loc > Length()) 
           printf("INVALID LOCATION!!!!!\tPlease try again . ");
       else if( loc == 1)
       {
           temp = root;
           root = temp->right;
           temp->right = NULL;
           root->left = NULL;
           free(temp);
       }
      else
       {
              struct node* p = root, *q;   //q should point to the node which should be deleted
              int i=1;                      //to travel from location 1

              while( i < loc-1)             // loc-1  coz it should travel to before node which is to be deleted .
              {
                     p = p->right;
                     i++;
              }
              q = p->right;
              p->right = q->right;
              q->right->left = p;
              q->left = NULL;
              q->right =NULL;

              free(q);
       }
}

    // ---------------------- :Display: -----------------------
    
void Display()
{
       struct node* temp = root;
       if (temp == NULL)
           printf("LIST IS EMPTY!!!!!!\tTRY AGAIN *_*"); 
       else
       {
              while(temp!=NULL)
              {
                     printf("%d--> ",temp->data);
                     temp = temp->right;
              }
              printf("\n\n");
       }
}

    //---------------------- : Reversing the nodes: -----------------------

void reverse()
{

}

   //-----------------------: Node swapping :-------------------------------

void node_swap()
{

}

void main()
{ 
   int choice;
   while(1)
   {
       printf("\n---- :OPERATIONS ON DOUBLY LINKED LISTS: -----\n");
       printf("1. Append\n");
       printf("2. At at Begining\n");
       printf("3. Length\n");
       printf("4. Add node after specified node\n");
       printf("5. Delete\n");
       printf("6. Display\n");
       printf("7.Reverse the elements\n");
       printf("8.swap the nodes\n");
       printf("9.Quit\n");

       printf("Enter your choice : "); 
       scanf("%d",&choice);

       switch (choice)
       {
        case 1: Append();
               break;
    
        case 2: addAtBegin(); 
               break;

        case 3:len = Length();
               printf("The length of the list is %d. \n",len);
               break;

        case 4: addNodeAfter(); 
               break;

        case 5: Delete(); 
               break;

        case 6: Display(); 
               break;

        case 7: reverse(); 
               break;

        case 8: node_swap(); 
             break;

        case 9: exit(1); 

        default:printf("--------------: INVALID CHOICE :---------------");
       }
   }
}
   