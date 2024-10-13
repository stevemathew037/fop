#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    int A[100], B[100], C[200];

    printf("Enter the number of elements in array A: ");
    scanf("%d", &n1);
    printf("Enter the elements of array A in ascending order:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in array B: ");
    scanf("%d", &n2);
    printf("Enter the elements of array B in ascending order:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < n1) {
        C[k++] = A[i++];
    }

    while (j < n2) {
        C[k++] = B[j++];
    }

    printf("Merged sorted array C:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

