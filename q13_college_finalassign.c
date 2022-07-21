/*
Author: A Roy
Date: 22.07.2022
Purpose: To define a recursive function and find the sum of n natural numbers.
*/

#include <stdio.h>
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else{
        return (n+sum(n-1));
    }
}

void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    printf("The sum of %d natural numbers is: %d", num, sum(num));
}