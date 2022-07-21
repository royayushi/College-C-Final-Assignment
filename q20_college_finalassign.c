/*
Author: A Roy
Date: 31.05.2022
Pupose: Printing pattern:

A
BC
DEF
GHIJ

*/

#include <stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++,k++)
       {
           printf("%c",(char)(k+64));
       } 
        printf("\n");
    }

    return 0;
}