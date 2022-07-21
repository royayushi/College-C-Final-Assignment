/*
Author: A Roy
Date: 31.05.2022
Purpose: To check the 2nd min number using conditional statements
*/

#include<stdio.h>
void main()
{
    int p,q,r;
    printf("Enter the three numbers: \n");
    scanf("%d %d %d",&p,&q,&r);

    if(p<q && p<r)
    {
        if(q<r)
        {
            printf("%d is the 2nd minimum number.\n",q);
        }
        else{
            printf("%d is the 2nd minimum number.\n",r);
        }
    }
    else if(q<p && q<r)
    {
        if(p<r)
        {
            printf("%d is the 2nd minimum number.\n",p);
        }
        else{
            printf("%d is the 2nd minimum number.\n",r);
        }
    }
    else if(r<p && r<q)
    {
        if(p<q)
        {
            printf("%d is the 2nd minimum number.\n",p);

        }
        else{
            printf("%d is the 2nd minimum number.\n",q);
        }
    }
    else if(p==q && q==r)
    {
        printf("The numbers are equal.");
    }
}