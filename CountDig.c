#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;

 while(n>0){
    int digit = n % 10;
    count++;
    n = n / 10;
   
 }

    printf("Number of digits: %d\n", count);

    return 0;
}