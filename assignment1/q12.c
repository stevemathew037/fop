#include <stdio.h>

int main() {
    int r, c, i, j;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrices A and B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

