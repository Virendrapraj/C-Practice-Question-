// Write a C program to check whether a year is a Leap Year or not.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

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