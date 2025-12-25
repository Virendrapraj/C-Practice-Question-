//  Write a C program to find the second largest element in an array.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
            int largest = arr[0];
            int secondLargest = -1;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > largest) {
                    secondLargest = largest;
                    largest = arr[i];
                } else if (arr[i] > secondLargest && arr[i] != largest) {
                    secondLargest = arr[i];
                }
            }
            if (secondLargest == -1) {
                printf("There is no second largest element.\n");
            } else {
                printf("The second largest element is %d\n", secondLargest);
            }
    

    return 0;
}