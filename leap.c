// program to check whether a given year is a leap
#include <stdio.h>
#include <iostream>

int main()
{
    int year;
    printf("Enter the year to check: ");
    scanf("%d", &year);

    //checking for leap year
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap year");
    else
        printf("Not a leap year.");
    printf("\n");

    int arr[] = {10, 20, 30};
    printf("%d", -2[array]);

    return 0;
}