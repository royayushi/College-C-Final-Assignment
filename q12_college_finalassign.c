/*
Author: A Roy
Date: 22.07.2022
Purpose: To define a non-recursive function and find the sum of n natural numbers.
*/

#include <stdio.h>
int sum(int n)
{
    int i, s=0;
    for (i=1; i<=n; i++)
    {
        s=s+i;
    }
    return s;
}

void main()
{
    int num, total;
    printf("Enter a number: \n");
    scanf("%d",&num);
    total= sum(num);
    printf("The sum of %d natural numbers is= %d\n", num, total);
}