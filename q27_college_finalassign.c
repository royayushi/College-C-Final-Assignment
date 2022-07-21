/*
Author: A Roy
Date: 31.05.2022
Purpose: To find if a year is leap year or not.

Leap year: A year that is divisible by 4 and not by 100

*/

#include <stdio.h>
void main()
{
    int year;

    printf("Enter a year: \n");
    scanf("%d",&year);

    if ((year%4 == 0 && year%100 != 0) || (year%4==0 && year%400 == 0)
    )
    {
        printf("%d is a leap year.\n", year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    }

}