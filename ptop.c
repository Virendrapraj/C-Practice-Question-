// 40. Write a C program to explain pointer to pointer.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int *ptr = &n;
    int **pptr = &ptr;
    printf("Value of n using pointer to pointer: %d\n", **pptr);


    return 0;
}