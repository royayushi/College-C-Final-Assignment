/*
Author: A Roy
Date: 22.07.2022
Purpose: To find the factorial of a number using recursion
*/

#include <stdio.h>
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}

void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("The factorial of %d is= %d\n",num,fact(num));
}