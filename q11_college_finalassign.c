/*
Author: A Roy
Date: 21.07.2022
Purpose: To calculate the transpose of a matrix
*/

#include <stdio.h>
void main()
{
    int i, j, row, col;
    int mat[12][12], transpose[12][12];
    printf("Enter rows, columns: \n");
    scanf("%d %d", &row, &col);

    // Entering elements for matrix

    printf("Enter elements for matrix: \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Printing the matrix

    printf("The matrix is: \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Finding the transpose

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            transpose[j][i]=mat[i][j];
        }
    }

    // Printing the transpose

    printf("The transpose is: \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}