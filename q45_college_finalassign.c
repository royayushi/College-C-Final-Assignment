/*
Author: A Roy
Date: 21.07.2022
Purpose: To search a particular data element from an array
*/

#include <stdio.h>
void main()
{
    int i, j, flag=0, a[100], n, search;

    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("Enter elements of array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Searching

    printf("Enter element to be searched: \n");
    scanf("%d", &search);

    for (i=0; i<n; i++)
    {
        if (a[i]==search)
        {
            printf("Element %d found at %d position.\n", search, i);
            flag=flag+1;
            break;
        }
    }
    if (flag==0)
    {
        printf("No element has been found.\n");
    }
}