/*
Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting
*/

#include<stdio.h>

void swap(int *x ,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Before swaping the value of num1 is %d and num2 is %d\n",num1,num2);

    swap(&num1,&num2);

    printf("After swaping the value of num1 is %d and num2 is %d\n",num1,num2);

    return 0;
}
