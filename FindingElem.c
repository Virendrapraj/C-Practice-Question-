// Write a C program to find the largest and smallest element in an array
#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    int min = INT_MAX;
    int max = INT_MIN;

    printf("Enter a size of Array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
     if(arr [i]> max){
        max = arr[i];
     }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("This is a Mininum number in Array = %d.\nThis is the Maximum number in Array = %d " , min , max);

    return 0;
}