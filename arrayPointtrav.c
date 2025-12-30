// 39. Write a C program to access array elements using pointer.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    printf("Array elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}