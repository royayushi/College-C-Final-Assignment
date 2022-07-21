/*
Author: A Roy
Date: 31.05.2022
Purpose: To convert temperature from Fahrenheit to Celcius.

Math Formula: c/5=(F-32)/9

*/

#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f",&f);

    c=(f-32)*5/9;
    printf("The temperature in celcius is %.3f.\n",c); //.3f means upto 3 decimal points.
}