/*
Author: A Roy
Date: 21.07.2022
Purpose: To calculate average of numbers between m and n using pointer.
*/

#include <stdio.h>
void main()
{
    int m, n, *ptr, x, sum=0;
    float mean;
    int count=0;
    printf("Enter the beginning and ending numbers respectively: \n");
    scanf("%d %d", &m, &n);
    x=m;
    while (x>=m && x<=n)
    {
        ptr=&x;
        sum=sum+*ptr;
        if (x>=m && x<=n)
        {
            count=count+1;
        }
        x++;
    }
    mean= (float)sum/count;
    printf("Mean=%.3f\n", mean);
}