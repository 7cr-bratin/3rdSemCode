#include<stdio.h>

/*int main()
{
   int i,j,n,a[20],temp,k;
   printf("Enter the no of elements to be sorted :");
   scanf("%d",&n);
   printf("Enter the elements to be soted : ");
   for(k=0;k<n;k++)
       scanf("%d",&a[k]);
   for ( i = 0; i < n-1; i++)
   {
       for ( j = 0; j < n-1-i; j++)
       {
           if(a[j]<a[j+1])
           {
               temp=a[j];                                   //---------:BUBBLE SORT IN ACENDING ORDER:------------
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
       //printf("Sorted array are as follows %d : ",a[i]);
    }   
    printf("Sorted elements in decending order: ");
    for(i=0;i<n;i++)
      printf("%d \n",a[i]);
       
}*/

int main()
{
    int arr[]={6,7,8,9,10,11,12,13};  //let it be the list
    int n = 8;
    int key = 7;    // let it be the element to be found
    int flag=0;
    int low=0,high=n-1;
    int mid;
    
    while (low <= high)
    {
        mid = (low + high)/2;                                                     //------------------:Binary Search:-----------------
        if(arr[mid] == key)
        {
            flag = 1;
            printf("Element found at index %d \n",mid);
            break;
        }
        else if (key < arr[mid])
        high = mid - 1;
        else if(key > arr[mid])
        low = mid + 1;    
    }
    if(flag==0)
    printf("Given element is not found ");
    else  
    printf("YES!!!! we did it.");
}

