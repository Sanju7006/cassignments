// Write a program to perform matrix multiplication.
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Get dimensions of the matrices
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &cols2);


    // Ensure matrices are compatible for multiplication
    if (cols1 != rows2) 
    {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Get elements of matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            scanf("%d", &matrix1[i][j]);

        }
    }

    // Get elements of matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}