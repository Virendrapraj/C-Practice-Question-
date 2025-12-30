#include <stdio.h>
int primefun(int n ){
    if (n <= 1)
    {
        return 0;
    }

    for( int i = 2;i*i <=n;i++ ){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
   printf("The number %d is %sprime.\n", n, primefun(n) ? "" : "not ");
    

    return 0;
}