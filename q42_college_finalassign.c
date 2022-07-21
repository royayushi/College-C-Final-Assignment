/*
Author: A Roy
Date: 21.07.2022
Purpose: To find the addition and subtraction of two matrices.
*/

#include <stdio.h>
void main()
{
    int mat1[12][12], mat2[12][12], sum[12][12], sub[12][12];
    int i,j,row,col;
    printf("Enter rows and columns: \n");
    scanf("%d %d",&row, &col);

    printf("Enter elements of matrix 1: \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2: \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Addition and subtraction

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
            sub[i][j]=mat1[i][j]-mat2[i][j];
        }
    }

    // Printing resultant matrices

    printf("The resultant matrix formed by the sum is: \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("The resultant matrix formed by the subtraction is: \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}