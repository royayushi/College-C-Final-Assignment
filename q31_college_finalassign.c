/*
Author: A Roy
Date: 31.05.2022
Purpose: To swap two integers without using a 3rd variable.

*/

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 1st number: \n");
    scanf("%d",&a);
    printf("Enter 2nd number: \n");
    scanf("%d",&b);

    printf("The values before swap: \n");
    printf("a=%d\nb=%d\n",a,b);

    a=a-b;
    b=b+a;
    a=b-a;

    printf("The values after swap: \n");
    printf("a=%d\nb=%d\n",a,b);
}