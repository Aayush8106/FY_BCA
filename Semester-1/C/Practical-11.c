#include <stdio.h>

void printMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], sum[10][10], difference[10][10];
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("\n");

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Row %d, Column %d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n");

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Row %d, Column %d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\n");

    printf("Matrix 1:\n");
    printMatrix(matrix1, row, col);
    printf("\n");

    printf("Matrix 2:\n");
    printMatrix(matrix2, row, col);
    printf("\n");

    addMatrices(matrix1, matrix2, sum, row, col);
    subtractMatrices(matrix1, matrix2, difference, row, col);

    printf("Sum of Matrices:\n");
    printMatrix(sum, row, col);
    printf("\n");

    printf("Difference of Matrices:\n");
    printMatrix(difference, row, col);

    return 0;
}