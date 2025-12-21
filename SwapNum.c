// 7. Write a C program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a ,b;

    printf("Enter a number: ");
    scanf("%d %d", &a,&b);
    a ^= b;
    b ^= a;
    a ^= b;
   printf("The A is =  %d \n The B is = %d  ",a , b);

    

    return 0;
}