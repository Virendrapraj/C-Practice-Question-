// Write a C program to check whether a year is a Leap Year or not.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a number: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Year is Leap Year");
    }
    else
    {
        printf("Year is Not a leap Year ");
    }

    return 0;
}