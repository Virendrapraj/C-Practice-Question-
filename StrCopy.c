//  Write a C program to copy one string into another without using strcpy().
#include <stdio.h>

int main() {
    char source[100], destination[100];
    printf("Enter the source string: ");
    gets(source);
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
    printf("Copied string: %s\n", destination);
    return 0;
}