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
        mid = (low + high)/2;
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