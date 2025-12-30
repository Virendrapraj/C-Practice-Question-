//  Write a C program to demonstrate pointer arithmetic.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    printf("Array elements using pointer arithmetic:\n");
    for(int i = 0;i<n;i++){
        printf("Element %d: %d\n", i+1, *(ptr + i));
    }


    return 0;
}