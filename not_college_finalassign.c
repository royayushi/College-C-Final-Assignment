/*
Author: A Roy
Date: 31.05.2022
Purpose: Printing pattern:

5
45
345
2345
12345

*/

#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number of rows: \n");
    scanf("%d",&n);

    for (i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}