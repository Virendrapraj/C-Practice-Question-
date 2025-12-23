// Write a C program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    printf("The n number of sum is :%d ", sum);
    

    return 0;
}