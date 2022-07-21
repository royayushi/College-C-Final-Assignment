/*
Author: A Roy
Date: 21.07.2022
Purpose: To store information of n number of students using structure.
*/

#include <stdio.h>
struct student{
    char firstname[100];
    int roll;
    float marks;
}s[100];

void main()
{
    int i, n;
    printf("Enter how many student's information to enter: \n");
    scanf("%d", &n);

    // Entering information

    printf("Storing information: \n");
    for (i=0; i<n; i++)
    {
        s[i].roll=i+1;
        printf("For roll %d: \n", s[i].roll);
        printf("Firstname: \n");
        scanf("%s", &s[i].firstname);
        printf("Marks: \n");
        scanf("%f", &s[i].marks);
    }

    // Displaying information

    printf("Displaying information: \n");
    for (i=0; i<n; i++)
    {
        printf("\nRoll number: %d",s[i].roll);
        printf("\nFirst Name: %s",s[i].firstname);
        printf("\nMarks: %.2f",s[i].marks);
        printf("\n");
    }
}