// Write a C program to check whether a string is Palindrome or not.
#include <stdio.h>

    int main() {
    char ch[10];

    printf("Enter a String : ");
    scanf("%s", &ch);
    int len = strlen(ch);
    int isCorrect = 1;


    for(int i =0;i <len/2;i++ ){
        if(ch[i] != ch[len -i -1]){
            isCorrect = 0;
            break;
        }
    }
    if ((isCorrect))
    {
       printf("String is Palindrom ");
    }else{
        printf("String is not Palindrom ");
    }
    
    
    

    return 0;
}