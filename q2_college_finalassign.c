/*
Author: A Roy
Date: 21.7.2022
Purpose: To find the maximum no between 2 numbers using pointer.
*/

#include<stdio.h>
void maximum(int *x, int *y)
{
    if (*x>*y)
    {
        printf("%d is the largest number.\n",*x);
    }
    else{
        printf("%d is the largest number.\n",*y);
    }
}

void main()
{
    int num1, num2;
    printf("Enter 1st number: \n");
    scanf("%d",&num1);
    printf("Enter 2nd number: \n");
    scanf("%d", &num2);

    // Calling the function

    maximum(&num1, &num2);
}