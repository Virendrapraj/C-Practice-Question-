// Write a C program to check whether a number is Armstrong or not.
#include <stdio.h>

    int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    int orieginal = n;
    int copy = 0;
    int digit = 0;

    while (n>0){
        digit = n % 10;
        copy += digit * digit * digit;
        n /=10;
    }
    if(copy == orieginal){
        printf("Armstrong Number");
    }else{
        printf("This is not Armstrong ");
    }
    

    return 0;
}