// Write a C program to check whether a number is Prime or not

#include<stdio.h>
    int main(){
    int n;
    int isPrime = 1;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("The number is not Prime");
        return 0;
    }

    for( int i = 2;i*i <=n;i++ ){
        if(n%i == 0){
        isPrime = 0;
        break;
        }
    }
    if(isPrime){
        printf("The number is Prime ");
    }else{
        printf("The number is not Prime ");
    }
    return 0;
}