/*
Author: A Roy
Date: 31.05.2022
Purpose: To find the length of a string without using strlen() function

*/

#include<stdio.h>
void main()
{
    char str[50];
    int i, length=0;

    printf("Enter a string: \n");
    gets(str);

    for (i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of the string(%s) is %d.\n",str,length);
}