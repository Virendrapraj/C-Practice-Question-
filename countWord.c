//  Write a C program to count words in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, wordCount = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            wordCount++;
        }
        i++;
    }
    // To account for the last word if the string is not empty
    if (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t') {
        wordCount++;
    }

    printf("Number of words in the string: %d\n", wordCount);
    

    return 0;
}