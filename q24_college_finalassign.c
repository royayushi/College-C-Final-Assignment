/*
Author: A Roy
Date: 31.05.2022
Purpose: To check whether a number is palindrome or not.

Palindrome number:
A number when reversed, gives the same number.

*/

#include <stdio.h>
void main()
{
    int n, r, rev_num=0, orig_num;
    printf("Enter a number: \n");
    scanf("%d", &n);

    orig_num=n;
    //reverse logic

    while (n!=0)
    {
        r=n%10;
        rev_num=rev_num*10+r;
        n=n/10;
    }

    if (orig_num==rev_num)
    {
        printf("%d is a palindrome number.\n",orig_num);
    }
    else{
        printf("%d is not a palindrome number.\n",orig_num);
    }

}