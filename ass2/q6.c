#include <stdio.h>

int main() {
    int rows, cols, i, j, positionRow, positionCol;
    int array[10][10];

    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Enter the position (row and column) to find the element:\n");
    scanf("%d %d", &positionRow, &positionCol);

    if (positionRow >= 0 && positionRow < rows && positionCol >= 0 && positionCol < cols) {
        printf("Element at position [%d][%d]: %d\n", positionRow, positionCol, array[positionRow][positionCol]);
    } else {
        printf("Invalid position!\n");
    }

    return 0;
}

