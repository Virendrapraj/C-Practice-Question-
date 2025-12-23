// Write a C program to find GCD and LCM of two numbers.
#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("GCD of %d and %d is: %d\n", a, b, gcd(a,b));
        printf("LCM of %d and %d is: %d\n", a, b, lcm(a,b));
    }
    return 0;
}