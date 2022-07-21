/*
Author: A Roy
Date: 22.07.2022
Purpose: To find the factorial of a number using non-recursive number.
*/

#include <Stdio.h>
int fact(int n)
{
    int f=1, i;
    for (i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}

void main()
{
    int num, factorial;
    printf("Enter a number: \n");
    scanf("%d", &num);
    factorial=fact(num);
    printf("The factorial of %d is= %d\n", num, factorial);
}