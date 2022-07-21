/*
Purpose: To concatenate a string without using the strcat() function
*/

#include<stdio.h>
void main()
{
    char str1[50], str2[50];
    int j=0;
    static int i=0;
    
    printf("Enter 1st string: \n");
    gets(str1);

    printf("Enter 2nd string: \n");
    gets(str2);

    while(str1[i]!='\0')
    {
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("Concatenated string is: %s\n",str1);
}