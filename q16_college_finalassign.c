/* 
Author: A Roy
Date: 31.05.2022
Purpose: Printing pattern:

ABCDE
ABCD
ABC
AB
A

*/

#include<stdio.h>
 
int main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}

/*
Alternate way:

#include<stdio.h>
 
int main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}

*/
