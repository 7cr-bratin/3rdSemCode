#include<stdio.h>

void quicksort(int [] ,int ,int);
int partition(int [] ,int ,int);

int main()
{
    int i,n,j,a[50];
    printf("How many elements : ");
    scanf("%d",&n);
    printf("Enter the elements to be sorted :"); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a , 0 , n-1);
    printf("Sorted array are as follows : \n"); 
    for(j = 0 ; j < n ; j++)
      printf("%d  ",a[j]);
    return 0;
}
    
void quicksort(int a[], int low ,int high) 
{
    int j;                                          //------------------:QUICK SORTING IN Acending Order:-------------------------
    if(low<high)
    {
         j = partition(a , low , high);
         quicksort(a , low , j-1);
         quicksort(a, j+1 , high);
    }
}  
int partition(int a[], int low , int high)
{
    int pivot=a[low];          //taking first element as the pivot .
    int i=low , j=high ,temp;
    while( i < j )
    {
        while(a[i]<=pivot)
        {
            i++;
        } 
        while(a[j] > pivot)
        {
            j--;
        } 
        if(i < j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }
    a[low]=a[j];
    a[j]=pivot;
    return j;
}
