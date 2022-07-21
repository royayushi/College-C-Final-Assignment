/* 
Author: A Roy
Date: 31.05.2022
Purpose: Printing patterns:

5
44
333
2222
11111

*/

#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
    printf("\n"); 
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
}

/*
Alternate way:

1.

#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
    printf("\n"); 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", (n-i+1));
        }
        printf("\n");
    }
}

2.

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
            printf("%d",i);
        }
        printf("\n");

    }
}

*/
