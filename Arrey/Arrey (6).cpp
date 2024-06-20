#include <stdio.h>

int main() {
    int rows, cols;

    // Reading the number of rows and columns for the matrices
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Declaring the matrices
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    // Reading the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Reading the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Performing addition
    printf("Result of addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Performing subtraction
    printf("Result of subtraction:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Performing multiplication
    if (cols == rows) { // For multiplication, the number of columns of the first matrix must equal the number of rows of the second matrix
        printf("Result of multiplication:\n");
        int mulResult[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mulResult[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    mulResult[i][j] += mat1[i][k] * mat2[k][j];
                }
                printf("%d ", mulResult[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication is not possible with the given matrices.\n");
    }

    return 0;
}

