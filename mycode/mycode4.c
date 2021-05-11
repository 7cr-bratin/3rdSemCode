#include<stdio.h>

//int list[50];
void Merge_Sort(int list[], int,int);
void Merge(int[],int,int, int);
int main() 
{
    int i,count,j,list[50];
    printf("Enter the no of elements: ");
    scanf("%d",&count);
    printf("Enter the elements to be sorted: ");
    for(i=0;i<count;i++)
        scanf("%d",&list[i]);

    Merge_Sort(list, 0,count-1);

    printf("Sorted array are as follows: ");
    for(j=0; j<count; j++)
      printf("%d   ",list[j]);
    return 0;                                                //------------------:MERGE SORT IN ASCENDING ORDER:--------------------
}
void Merge_Sort(int list[],int low , int high)
{
     int mid;

     if(low<high)
     {
       mid=(low+high)/2;
       Merge_Sort(list, low, mid);
       Merge_Sort(list, mid+1, high);
       Merge(list, low, mid, high);
     }
}
void Merge(int list[],int low,int mid,int high)
{
  int lo, k , mi , temp[50], i;
  lo=low;
  i=low;
  mi=mid+1;
  while((lo<=mid) && (mi<=high))
  {
    if(list[lo]<=list[mi])
    {
      temp[i++]=list[lo];
      lo++;
    }
    else            //if(lo>list[mi])
    {
      temp[i++]=list[mi];  
      mi++;
    }
    
  }  
    if( lo > mid )
    {
      /* code */
      for(k=mi;k<=high;k++)
      {
        temp[i]=list[k];
        i++;
      }
    }
    else // if(lo < mid)
    {
      for(k=lo;k<=mid;k++)
      {
        temp[i]=list[k];
        i++;
      }
    }
    for(k=low; k<=high; k++)
        list[k] = temp[k];
} 
