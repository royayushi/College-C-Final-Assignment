/*
Author: A Roy
Date: 21.07.2022
Purpose: To sort an array using pointer.
*/

#include <stdio.h>
void sort(int n, int *x)
{
    int i, j, temp;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (*(x+i)>*(x+j))
            {
                temp=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=temp;
            }
        }
    }
    printf("\nThe sorted array is: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\t", *(x+i));
    }
}

void main()
{
    int a[100], n, i;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array before sorting: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    } 

    // Calling the function
    sort(n, a);
}