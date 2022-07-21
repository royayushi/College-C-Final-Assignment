/*
Author: A Roy
Date: 21.7.2022
Purpose: To sort the values of an array
*/

#include <stdio.h>
void main()
{
    int a[100], i, j, n, temp;
    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    // Printing the sorted elements

    printf("Elements in ascending order: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}