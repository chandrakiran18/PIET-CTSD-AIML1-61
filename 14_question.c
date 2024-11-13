// 14.	Develop a program that takes a character as input and determines whether it is a vowel, consonant, digit, or special character using if-else statements.
#include <stdio.h>

int main(){
    char character;
    printf("Please enter one letter that you want to check \n:");
    scanf("%c", &character);
    if (character >= 97 && character <= 122)
    {
        printf("The letter :-'%c' entered by you is in small case.", character);
    }
    else
    {
        printf("The letter :-'%c' entered by you is not in small case.", character);
    }
    return 0;
}