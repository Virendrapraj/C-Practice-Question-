//  Write a C program to compare two strings.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");     
    gets(str1);
    printf("Enter the second string: ");    
    gets(str2);
    int i = 0;
    while(str1[i] !='\0' && str2[i] !='\0') {
        if(str1[i] != str2[i]) {
            break;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}