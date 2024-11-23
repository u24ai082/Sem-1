#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3], i, j;

    printf("Enter the elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nResulting matrix after addition:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}