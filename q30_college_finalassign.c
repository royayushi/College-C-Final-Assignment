/*
Author: A Roy
Date: 31.05.2022
Purpose: To convert temperature from Celcius to Fahrenheit

Math formula:
(c*9/5)+32=f

*/

#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature in Celcius: \n");
    scanf("%f",&c);

    f=32+(c*9/5);
    printf("The temperature in Fahrenheit is: %.3f\n",f);
}