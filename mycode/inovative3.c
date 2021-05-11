#include <stdio.h>                                  //-------------:HACKER RANK PRACTICE SLIDE:--------------
#include<string.h>
#include <math.h>
#include <stdlib.h>
 
/*int main() 
{
    char s,word[20],str[2000];
    scanf("%s",&s);
    scanf("%s",word);
    //scanf("%[^\n]%*c", str);
    fgets(str,2000,stdin);

    printf("%c\n",s);
    printf("%s\n",word);
    printf("%s", str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT  
    return 0;
}
*/

/*
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
 /*   int i,freq=0; char str[1000],j;
    scanf("%[^\n]s",&str);


    for(j='0';j<='9';j++)
    {
         freq=0;
         for(i=0;i<strlen(str);i++)
         {
             if(str[i]==j)
             freq++;
         }
         printf("%d ",freq);
    }   
    return 0;
}

int main()
{
    char str[1000];
    printf("Enter your string which is to be reversed: ");             //---------------reversing a sting----------------
    scanf("%[^\n]s",&str);
    strrev(str);
    printf("%s",str);
    return 0;
}

int main()
{
    char str1[]="Problem solving ";
    char str2[]="skills are important";
    strcat(str1,str2);
   
    puts(str1);
    
    return 0;

}*/

/*int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
 //   {
  ///    printf("%d is present at location %d.\n", search, c+1);
    //  break;
  //  }
 /// }
 // if (c == n)
   // printf("%d isn't present in the array.\n", search);

 // return 0;
//}*/
        
/* int main( void ) 
 {
        
  int numbers[ 10 ];
  int i, index = 2;
            
  for( i = 0; i < 10; i++ ) 
    numbers[ i ] = i * 10;
            
  numbers[ 8 ] = 25;
  numbers[ 5 ] = numbers[ 9 ] / 3;
  numbers[ 4 ] += numbers[ 2 ] / numbers[ 1 ];
  numbers[ index ] = 5;
  ++numbers[ index ];
  numbers[ numbers[ index++ ] ] = 100;
  numbers[ index ] = numbers[ numbers[ index + 1 ] / 7 ]--;
            
  for( index = 0; index < 10; index++ )
     printf( "numbers[ %d ] = %d\n", index, numbers[ index ] );
            
 }*/

 /*#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;



void createList(int n);
void displayList();
void deleteFromBeginning();
void displayDlListRev();

int main()
{
    int n, data, choice=1;

    head = NULL;
    last = NULL;

    
    while(choice != 5)
    {
        printf("1. Create List\n");
        printf("2. Delete node\n");
        printf("3. Display from front to end\n");
        printf("4. Display in reverse\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                deleteFromBeginning();
                break;
            case 3:
                displayList();
                break;
      case 4:
                displayDlListRev();
                break;
            case 5:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-5");
        }

        printf("\n\n");
    }

    return 0;
}

void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->prev = NULL;
        head->next = NULL;

        last = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->prev = last; 
            newNode->next = NULL;

            last->next = newNode; 
            last = newNode; 
        }
    }
}

void displayList()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;

        while(temp != NULL)
        {
            printf(" %d  ", temp->data);

            n++;
            temp = temp->next;
        }
    }
}


void deleteFromBeginning()
{
    struct node * toDelete;

    if(head == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        toDelete = head;

        head = head->next; 
        
        if (head != NULL)
            head->prev = NULL; 

        free(toDelete);
    }
}

void displayDlListRev()
{
    struct node * tmp;
    int n = 0;
 
    if(last == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = last;
        printf("\n Data in reverse order are :\n");
        while(tmp != NULL)
        {
            printf(" %d  ",tmp->data);
            n++;
            tmp = tmp->prev;
        }
    }
}*/

/
/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n;
int main() {

    // Enter your code here. Read input from STDIN. Print output to STDOUT 
    char password[10];
    int  j;
    
    scanf("%[^\n]%*c", password); 
    for(j = 0; (password[j]='\0') ; j++)
      n = n+1;
    
    int num = 0 ,count = 0,i;
    int uc = 0, lc = 0, ch =0, no=0 ;
    for(i = 0 ; i<n ;i++)                                                         //HACKERRANK 
    {
        if(password[i] >= 'a' && password[i]<= 'z')
            lc++;
         if(password[i] >= 'A' && password[i]<= 'Z')
            uc++;
         if(password[i] >= 48 && password[i]<= 57)
            no++;
         if((password[i] >= 33 && password[i]<= 47) || (password[i] >= 58 && password[i] <= 64) || (password[i] >= 91 && password[i] <= 96))
            ch++;
    }
    if(lc == 0)
        num++;
    if(uc == 0)
        num++;
    if(no == 0)
        num++;
    if(ch == 0)
        num++;
    if(n < 6)
    {
        count = 6 - n;
        if(num  > count )
          printf("%d", num);
        else
           printf("%d",count);
    }
   printf("%d",num);
        
    return 0;
}*/
#include<stdio.h>
#include<string.h>
 
int search(char[], char[]);
 
int main() {
   int loc;
 
   char source[] = "maharashtra";
   char target[] = "sht";
 
   loc = search(source, target);
 
   if (loc == -1)
      printf("\nNot found");
   else
      printf("\nFound at location %d", loc + 1);
 
   return (0);
}
 
int search(char src[], char str[]) {
   int i, j, firstOcc;
   i = 0, j = 0;
 
   while (src[i] != '\0') {
 
      while (src[i] != str[0] && src[i] != '\0')
         i++;
 
      if (src[i] == '\0')
         return (-1);
 
      firstOcc = i;
 
      while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0') {
         i++;
         j++;
      }
 
      if (str[j] == '\0')
         return (firstOcc);
      if (src[i] == '\0')
         return (-1);
 
      i = firstOcc + 1;
      j = 0;
   }
}