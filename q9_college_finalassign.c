/*
Author: A Roy
Date: 22.07.2022
Purpose: To check if a string is palindrome or not.
*/

#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, flag=0;
    char str[100];
    printf("Enter a string: \n");
    gets(str);
    n=strlen(str);

    // Checking if the string is palindrome or not

    for (i=0; i<n; i++)
    {
        if (str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
    }

    printf("Is the string, '%s' palindrome?\n", str);
    if (flag==0)
    {
        printf("Yes.\n");
    }
    else{
        printf("No.\n");
    }
}