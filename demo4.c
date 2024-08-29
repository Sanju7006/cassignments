/*Accept an integer number and when the program is executed print the 
binary, octal and hexadecimal equivalent of the given number. 
Sample Output: 
Enter Number : 20 
Given Number :20 
Binary equivalent :10100 
Octal equivalent :24 
Hexadecimal equivalent :14    
Hint: Use bitwise operators for binary conversion. Octal/Hexadecimal 
conversion to be done by repetitive division using recursion.  */
#include <stdio.h>

// Function to convert an integer to binary using bitwise operators
void printBinary(int num) {
    int i;
    printf("Binary equivalent: ");
    for (i = 31; i >= 0; i--) {  // Assume a 32-bit integer
        int bit = (num >> i) & 1; // Extract each bit from the highest to the lowest
        printf("%d", bit);
    }
    printf("\n");
}

// Recursive function to convert an integer to octal
void printOctal(int num) {
    if (num == 0) {
        return;
    }
    printOctal(num / 8);
    printf("%d", num % 8);
}

// Recursive function to convert an integer to hexadecimal
void printHexadecimal(int num) {
    if (num == 0) {
        return;
    }
    printHexadecimal(num / 16);
    int remainder = num % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);
    
    // Binary conversion
    printBinary(num);

    // Octal conversion
    printf("Octal equivalent: ");
    if (num == 0) {
        printf("0"); // Special case for 0
    } else {
        printOctal(num);
    }
    printf("\n");

    // Hexadecimal conversion
    printf("Hexadecimal equivalent: ");
    if (num == 0) {
        printf("0"); // Special case for 0
    } else {
        printHexadecimal(num);
    }
    printf("\n");

    return 0;
}
