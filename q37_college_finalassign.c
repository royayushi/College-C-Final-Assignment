/*
Purpose: To print the reverse value of sting without using strrev()
*/

#include<stdio.h>
#include<string.h>

void main()
{
    int i,n;
    char str[20];
    printf("Enter the string to get reversed: \n");
    gets(str);
    n=strlen(str);

    printf("Reversed string is \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}