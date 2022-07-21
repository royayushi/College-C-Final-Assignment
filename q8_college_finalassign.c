/*
Author: A Roy
Date: 22.07.2022
Purpose: To sort an array using insertion sort.
*/

#include <stdio.h>
void main()
{
    int i, j, temp,n, a[100];
    printf("Enter number of elements to be entered: \n");
    scanf("%d",&n);

    // Entering elements in array
    printf("Enter elements in the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting
    for (i=0; i<n; i++)
    {
        temp=a[i];
        j=i-1;

        while ((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    printf("Sorted elements: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}