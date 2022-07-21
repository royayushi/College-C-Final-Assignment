/*
Author: A Roy
Date: 31.05.2022
Purpose: Printing pattern:

55555
4444
333
22
1

*/

#include<stdio.h>

void main()
{
    int i,j,n;

    printf("Enter the no of lines\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}