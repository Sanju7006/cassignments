// Write a program to calculate Fibonacci Series up to n numbers
#include <stdio.h>

int main() {
    int n, f1 = 0, f2 = 1, f3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; ++i) 
    {
        if (i <= 1)
            f3 = i;
        else {
            f3 = f1+ f2;
            f1 = f2;
            f2 = f3;
        }

        printf("%d ", f3); 

    }

    return 0;
}