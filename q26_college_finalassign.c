/*
Author: A Roy
Date: 31.05.2022
Purpose: To find the sum of n natural numbers using while loop
*/

#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter a positive integer: \n");
    scanf("%d",&n);

    while (i<=n)
    {
        s=s+i;
        i++;
    }
    printf("Sum of %d natural numbers is %d.\n",n,s);

}