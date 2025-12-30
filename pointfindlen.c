//  Write a C program to find length of string using pointer.
#include <stdio.h>

int main() {
  

    printf("Enter a String : ");


    char str[100];
    gets(str);  // not good to use gets due to security reasons but used here for simplicity
    fgets(str, sizeof(str), stdin); // use fgets to avoid buffer overflow and use safer input method

    char *ptr = str;
    int len =0;
    while(*ptr != '\0'){
        len++;
        ptr++;
    }
    printf("Length of string is: %d\n", len);
    return 0;
}