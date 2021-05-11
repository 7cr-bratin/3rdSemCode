 #include<stdio.h>
 #include<stdlib.h>

 struct node
 {
    int data;
    struct node* left;
    struct node* right;
 };
 struct node* root= NULL;
 
int insert(int);
int delete(int);
void inorder(struct node*);

int main()
{
   int choice, ele,key,ele1,key1;
   while(1)
   {
       printf("\n1. INSERT IN BST\n");
       printf("2. DELETE IN BST\n"); 
       printf("3. DISPLAY/inorder Traversal\n");
       printf("4. EXIT\n");

       printf("Please Enter Your Choice: ");
       scanf("%d",&choice);

       switch(choice)
       {
          case 1: printf("Enter element to be inserted in BST : ");
                  scanf("%d",&ele);
                  ele1=insert(ele);
                  printf("%d inserted succesfully!!!\n",ele1);
                  break;
          
          case 2: printf("Enter the element to be deleted in BST:  "); 
                  scanf("%d ",&key);
                  
                  key1=delete(key);
                  printf("%d is deleted from the BST",key1);
                  break;

          case 3: printf("Elements in the BST are : ");
                 inorder(root);
                 break;

          case 4:exit(0);

          default: printf("INVALID CHOICE!!!\tPLEASE TRY AGAIN ...");
                   break;
       }
   }
   return 0;
}

int insert(int d)
{
   struct node *temp , *p;
   temp = (struct node*)malloc(sizeof(struct node));
   temp->data = d;
   temp->left = NULL;
   temp->right = NULL;
   p = root;     //p reffers to parent node of every tree/subtree
   if(root == NULL)
      root = temp;
   else
   {
      struct node* curr;
      curr = root;  //current reffers to every current node during traversing.
      while(curr)
      {
         p = curr;
         if( temp->data > curr->data)
             curr = curr->right;
         else 
             curr = curr->left;
      }
      if ( temp->data > p->data)
        p->right = temp;
      else 
        p->left = temp;  
   }
   return d;
}


int delete(int key)
{
   
   struct node* curr = root, *p; // here p denotes the parent of the key(node) to be deleted

   if(root == NULL)
      printf("--------No nodes to be deleted--------\n");
   else 
   {
      while(curr!= NULL && curr->data!= key)       // locating the current node OR the node to be deleted.
      {
        p = curr;
        if( key < curr->data)
          curr = curr->left;
        else 
          curr = curr->right;
      }
      if((curr->left==NULL) || (curr->right==NULL))
      {
          // -------------------- to delete the leaf node ------------------
          if( (curr->left == NULL) && (curr->right == NULL) )
          {
             if( curr == p->right)
               p->right = NULL;
             else 
               p->left = NULL;
         
             free(curr);
          }
          // -------------------- to delete the node having single child ------------- (4 POSSIBILITIIES)
          if(curr->left != NULL)          // IF CURRENT TO LEFT IS OCCUPIED (2 condition)
          {
             if(curr == p->right)
                p->right = curr->left;         // 1st .           
             curr->left = NULL;                                                                  
             free(curr);

             if(curr == p->left)
                p->left = curr->left;          // 2nd .
             curr->left = NULL;
             free(curr);
          }
          if(curr->right != NULL)        // IF CURRENT TO RIGHT IS OCCUPIED (2 condition)
          {
             if(curr == p->right)
                p->right = curr->right;        // 3rd .
             curr->right = NULL;
             free(curr);

             if(curr == p->left)
                p->left = curr->right;         // 4th .
             curr->right = NULL;
             free(curr);
          }
          return key;
      }
      // ------------- to delete a node having 2 child ---------------
      else 
      {
         struct node* temp, *p1=NULL;        //*temp :-- will loacate the node with MINIMUM data in right sub-tree.  *p1:--is the parent off the minimum data node.
         temp = curr->right;               //(HERE I'M TAKING THE LEAST VALUE OF THE RIGHT SUBTREE, so moving right side.)
         while(temp->left != NULL)
         {
            p1= temp;
            temp = temp->left;
         }
         if(p1 != NULL)                             
            p1->left = temp->right;              //to connect right nodes of the minimum nodes(if present) to the parent of min.
         else 
            curr->right = temp->right;         

         curr->data = temp->data;
         free(temp);
      }
   }
}

//---------------------:INORDER TRAVERSAL:-------------------------
void inorder(struct node* temp)
{
   if(temp->left)
    inorder(temp->left);
   printf("%d ",temp->data);
   if(temp->right)
    inorder(temp->right);
}  





