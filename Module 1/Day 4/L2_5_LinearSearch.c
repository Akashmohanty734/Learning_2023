
#include <stdio.h>
// Function Declaration
int LinearSearch(int arr[] , int size , int key);


int main()
{
    int arr[]={43,22,66,11,8,50};
    int key;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printf("Array elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the elements which you want to search\n");
    scanf("%d",&key);

    int indexed=LinearSearch(arr,n,key);
    if(indexed != -1)
    {
        printf("Element %d found at index no. %d",key,indexed);
    }
    else
        printf("Element %d not found",key);
    return 0;
}

int LinearSearch(int arr[], int size , int key)
{
    for(int i=0 ; i<size ; i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }
    return -1;
}




