/*
Author: A Roy
Date: 22.07.2022
Purpose: To find the average of the elements in an array.
*/

#include <stdio.h>
void main()
{
    int n, i, sum=0, a[100];
    float avg;
    printf("Enter the number of elements to be entered: ");
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

    // Finding the average
    avg=(float)sum/n;
    printf("The average of the elements in the array is: %.3f\n",avg);
}