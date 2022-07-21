/*
Author: A Roy
Date: 31.05.2022
Pupose: To check if a number is prime or not.

A number is prime only if it is divisible by 1 and itself. Otherwise it is a composite number.
Since, a prime no is only divisible by 1 or itself, therefore the count must be 2.

*/

#include<stdio.h>
void main()
{
    int i,c=0,n;
    printf("Enter a number: \n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        printf("%d is a prime number.\n",n);
    }
    else{
        printf("%d is not a prime number.\n",n);
    }
}