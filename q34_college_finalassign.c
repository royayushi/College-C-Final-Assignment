/*
Author: A Roy
Date: 31.05.2022
Purpose: To swap two integers using a 3rd variable.
*/

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);

    printf("The numbers before swapping: \na=%d\nb=%d\n",a,b);

    c=a;
    a=b;
    b=c;

    printf("The numbers after swapping: \na=%d\nb=%d\n",a,b);

}