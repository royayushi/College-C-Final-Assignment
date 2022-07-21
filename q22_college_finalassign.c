/*
Author: A Roy
Date: 31.05.2022
Purpose: Printing pattern:

This pattern is also known as Floyd pattern.

   1
   2   3
   4   5   6
   7   8   9  10

*/

#include<stdio.h>
void main()
{
    int i,j,k=1,n;
    printf("Enter line of rows to be printed: \n");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%4d",k);
            // the 4d means 4 spaces
        }
        printf("\n");
    }
}