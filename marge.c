// Write a C program to merge two arrays.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
            int mergedArr[2*n];
            for (int i = 0; i < n; i++)
            {
                mergedArr[i] = arr1[i];
            }
            for (int i = 0; i < n; i++)
            {
                mergedArr[n + i] = arr2[i];
            }
            printf("Merged array: ");
            for (int i = 0; i < 2*n; i++)
            {
                printf("%d ", mergedArr[i]);
            }
    

    return 0;
}