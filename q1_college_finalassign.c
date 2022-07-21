/*
Author: A Roy
Date: 21/07/2022
Purpose: To swap two values using pointers.
*/

#include <Stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int num1, num2;
    printf("Enter 1st number: \n");
    scanf("%d",&num1);
    printf("Enter 2nd number: \n");
    scanf("%d", &num2);
    printf("Before swapping: \n");
    printf("num1=%d\nnum2=%d\n",num1, num2);
    
    // Calling the function

    swap(&num1, &num2);
    printf("After swapping: \n");
    printf("num1=%d\nnum2=%d\n", num1, num2);

    return 0;
}