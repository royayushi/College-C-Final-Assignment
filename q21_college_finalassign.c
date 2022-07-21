/*
Author: A Roy
Date: 31.05.2022
Purpose: Printing Pattern:

5
54
543
5432
54321

*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter line of rows: \n");
    scanf("%d",&n);
    printf("\n");

    for (i=n;i>=1;i--)
    {
        for (j=n;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}