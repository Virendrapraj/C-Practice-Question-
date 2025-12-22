// git add .
// git commit -m "Updated palindrome and prime programs"
// git push
// Write a C program to implement Linear Search algorithm
#include <stdio.h>

int main() {
    int n;
    int key =7;
    int found = 0;


    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element not found");
    }
    return 0;
}