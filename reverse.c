// Write a C program to reverse a given number.
#include <stdio.h>

    int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    int digit = 0;
    int reverse = 0;

    while(n > 0){
     digit = n % 10;
     reverse = reverse *  10 + digit;
     n   /= 10;
    }
    printf("Modified number : %d", reverse);

    return 0;
}