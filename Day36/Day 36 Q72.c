// Q72: Write a C program to calculate the sum of all elements in a matrix of size m x n.

// PROGRAM:

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // add each element to sum
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
