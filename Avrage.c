//  Write a C program to find the sum and average of array elements.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

     int arr[n];
     for (size_t i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
     }
        int sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        float average = sum / (float)n;
        printf("The sum is %d\n", sum); 
        printf("The average is %.2f\n", average);

    return 0;
}