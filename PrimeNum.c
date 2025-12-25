#include <stdio.h>

int main() {
   
    int isPrime = 1; // Assume number is prime
    for (int i = 2; i <= 100; i++)
    {
        isPrime = 1;
        if (i <= 1) {
            isPrime = 0; // Numbers less than or equal to 1 are not prime
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0; // Found a divisor, not prime
                    break;
                }
            }
        }
            if(isPrime){
                printf("The number is prime %d\n", i);
            }
    }
    
   

    return 0;
}