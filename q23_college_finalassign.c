/*
Author: A Roy
Date: 31.05.2022

Purpose: Write a C Program to check whether the given number is Armstrong
or not.

What is Armstrong number?

This C program is to check whether the given number is an armstrong number or not.An armstrong number is a number whose sum of cubes of digits is equal to the number itself.For example 153 is an armstrong number as

(1)^3 + (5)^3 + (3)^3 = 153.

*/

#include<stdio.h>
void main()
{
    int n, num, r, s=0;
    printf("Enter a number \n");
    scanf("%d",&n);

    num=n;

    while (num!=0)
    {
        r=num%10;
        s=s+r*r*r;
        num=num/10;
    }

    if (s==n)
        printf("%d is an Armstrong number.\n",n);
    else
        printf("%d is not an Armstrong number.\n",n);
}

