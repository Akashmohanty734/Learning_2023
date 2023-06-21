#include<stdio.h>

int main(){

    int n,j,i;
    printf("Enter number of inputs\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    printf("Inital Array\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0 ,j=n-1 ;i<j ; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=arr[i];
    }
    printf("\nArray after reversing\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}