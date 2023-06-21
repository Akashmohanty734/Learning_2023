#include<stdio.h>

int main(){

    int n;
    printf("Enter number of inputs\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    int min=arr[0],max=arr[0];
    for(int i=1 ; i<n ; i++)
    {
        if(min>=arr[i])
        {
            min=arr[i];
        }
        else if(max<arr[i])
        {
            max=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("Min: %d and Max: %d",min, max);

    return 0;
}