/*
Author: A Roy
Date: 31.05.2022
Purpose: Printing pattern:

54321
5432
543
54
5

*/

#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",j);
        }
         printf("\n");
    }
}