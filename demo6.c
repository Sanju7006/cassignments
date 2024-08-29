/*Write a program to check the input characters for uppercase, lowercase, number of digits and other characters. Display appropriate message. */
#include <stdio.h>

int main() 
{
    char ch;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        uppercase++;
    } else if (ch >= 'a' && ch <= 'z') {
        lowercase++;
    } else if (ch >= '0' && ch <= '9') {
        digits++;
    } else {
        others++;
    }

    printf("Character: %c\n", ch);
    printf("Uppercase characters: %d\n", uppercase);
    printf("Lowercase characters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}