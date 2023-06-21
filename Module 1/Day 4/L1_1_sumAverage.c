

#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of inputs\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    int total=0;
    float average=0;
    for(int i=0 ; i<n ; i++)
    {
        total+=arr[i];
    }
    average=(float)total/n;
    printf("Total sum is %d and average is %f",total,average);
    return 0;
}