// .Write a C program to count vowels and consonants in a string.
#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a String : ");
    scanf("%s", str);
    int countVow = 0;
    int countConso = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'E' || str[i] == 'U' 
        || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            countVow++;
        }else{
            countConso++;
        }
    }
    printf("Number Vowal in String %d \n Number of Consonant in String %d" ,countVow , countConso);

    return 0;
}