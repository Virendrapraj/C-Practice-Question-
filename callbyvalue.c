//Write a C program to swap two numbers using call by value and call by reference
#include <stdio.h>
    
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n,m;

    printf("Enter a 1st number: ");
    scanf("%d", &n);
    printf("Enter a 2nd number: ");
    scanf("%d", &m);
   

    swapByValue(n, m);
    printf("After swapping using call by value: %d %d\n", n, m);
       

   
    swapByReference(&n, &m); 
    printf("After swapping using call by reference: %d %d\n", n, m);
    return 0;
}