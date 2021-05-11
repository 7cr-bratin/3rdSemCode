/*#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,pos,i,j,a[100],k,temp;
    int* no;
    printf("Enter the total number of elements: ");
    scanf("%d", &num);
     printf("Enter the elements to be soted : ");
     for(k=0;k<num;k++)
       scanf("%d",&a[k]);
    for ( i = 0; i < num-1; i++)
   {
       for ( j = 0; j < num-1-i; j++)
       {
           if(a[j]<a[j+1])
           {
               temp=a[j];                               
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
    printf("Enter position of the element: \n");
    scanf("%d",&pos);

    no = (int *)calloc(num, sizeof(float));
    if (no == NULL) 
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    else  
    {
       for(i=0 ; i<pos; i++)
       {
           if(a[i] == a[pos])
            printf("%d",a[i]);
       }
      
    }
}

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* num1, *num2, i, *result,n;

    num1 = (int*)malloc(sizeof(int));
    num2 = (int*)malloc(sizeof(int));
    result = (int*)malloc(sizeof(int));

    scanf("%d",&n); 

    for(i = 0 ; i < n ; i++)
        scanf("%d",(num1+i));
    
    for(i = 0 ; i < n ; i++)
        scanf("%d",(num2+i));
    
    for(i = 0 ; i<n ; i++)
        *(result+i) = *(num1 + i) + *(num2 + i);
    
    printf("SUM IS : ");

    for(i = 0 ; i<n ; i++)
        printf("%d \n",*(result+i));

}*/

#include<stdio.h>
 
int main()
{
        int n,sum,sum1=0,i,j;

        scanf("%d",&n);
 
        for(i=1;i<=n;i++)
        {
            sum=0;
          for(j=1;j<=i;j++)
            {
             sum=sum+j;
            }
         sum1=sum1+sum;
        }
 
        printf("The Sum of Series up to Value %d = %d\n",n,sum1);
      return 0;
}
