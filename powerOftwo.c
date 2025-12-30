#include <stdio.h>
int PowerOftwo(int n){
    if( n== 1)
    return 1;
    if(n <= 0 || n%2 !=0)
    return 0;
    return PowerOftwo(n/2);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    // if (n > 0 && (n & (n - 1)) == 0)
    // {
    //     printf("The number is power of Two => %d", n);
    // }
    // else
    // {
    //     printf("This number is not power of Two. ");
    // }

    if (PowerOftwo(n))
    {
        printf("The number is power of Two => %d", n);
    }
        else
        {
            printf("This number is not power of Two. ");
        }

        return 0;
}