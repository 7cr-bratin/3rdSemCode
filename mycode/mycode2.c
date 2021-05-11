#include<stdio.h>
int main()
{
    int i,j,k,n,max,temp,a[20],pos;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the elements to be sorted :  ");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)  
    {
        max=a[j];
        pos=j;
        for(k=j+1;k<n-1;k++)
        {
            if(a[k]>max)
            {
                max=a[k];                                      //-----------:SELECTION SORT IN DECENDING ORDER:----------
                pos=k;
            }
        }
        if (j!=k)
        {
            /* code */
            a[pos]=a[j];
            a[j]=max;
        }
        
    } 
    printf("Sorted elements in decending order:  ");
    for ( j = 0; j < n-1; j++)
    {
        /* code */
        printf("%d \n",a[j]);
    }
    
}