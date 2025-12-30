#include <stdio.h>
int Arraysum(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The sum of array elements is: %d\n", Arraysum(arr,n));
    return 0;
}