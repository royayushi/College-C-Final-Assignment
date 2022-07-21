/*
Author: A Roy
Date: 31.05.2022
Pupose: To check if a number id odd or even.

If the number is divisible by 2, then even. Otherwise, odd.

*/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("%d is an even number.\n",n);
    }
    else{
        printf("%d is an odd number.\n",n);
    }
}