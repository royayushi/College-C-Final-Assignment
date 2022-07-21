/*
Author: A Roy
Date: 21.07.2022
Purpose: To store information of a student using structure.
*/

#include <Stdio.h>
struct student{
    char firstname[100];
    int roll;
    float marks;
}s[100];

void main()
{
    int i;
    // Entering information

    printf("Storing information: \n");
    printf("\nEnter roll n: ");
    scanf("%d", &s[1].roll);
    printf("\nEnter First Name: ");
    scanf("%s", &s[1].firstname);
    printf("\nEnter marks: ");
    scanf("%f", &s[1].marks);

    // Displaying information

    printf("Displaying information: \n");
    printf("\nRoll number: %d", s[1].roll);
    printf("\nFirst Name: %s", s[1].firstname);
    printf("\nMarks: %.2f", s[1].marks);
    printf("\n");

}