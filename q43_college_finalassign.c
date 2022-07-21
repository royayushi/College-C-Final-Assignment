/*
Author: A Roy
Date: 21.07.2022
Purpose: To find the sum of n input of numbers using array.
*/

#include <Stdio.h>
void main()
{
    int a[100], sum=0, i, j, n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Finding the sum

    for (i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    // Printing the sum

    printf("The sum of %d elements in an array= %d\n",n, sum);
}