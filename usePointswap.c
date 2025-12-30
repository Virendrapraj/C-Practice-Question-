// Write a C program to swap two numbers using pointers.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a 1st number: ");
    scanf("%d", &n);
    int m;
    printf("Enter a 2nd  number: ");
    scanf("%d", &m);
    int *a = &n;
    int *b = &m;
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping: %d %d\n", n, m);


   return 0;
}