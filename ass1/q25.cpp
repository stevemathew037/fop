#include <stdio.h>

int main() {
    // 1. Print a square of asterisks
    printf("1. Square of Asterisks:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // 2. Print a right-angled triangle of asterisks
    printf("2. Right-Angled Triangle of Asterisks:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // 3. Print an inverted right-angled triangle of asterisks
    printf("3. Inverted Right-Angled Triangle of Asterisks:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // 4. Print a pattern with two rows of asterisks at the bottom
    printf("4. Special Pattern:\n");
    for (int i = 5; i >= 1; i--) {
        if (i == 5) {
            for (int j = 1; j <= 5; j++) {
                printf("* ");
            }
        } else {
            for (int j = 1; j <= 2; j++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    
    // 5. Print a diamond shape pattern of asterisks
    printf("5. Diamond Shape Pattern:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // 6. Print a right-angled triangle of asterisks (inverted)
    printf("6. Inverted Right-Angled Triangle:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // 7. Print an incremental number pattern
    printf("7. Incremental Number Pattern:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // 8. Print an incremental number pattern with repeated numbers
    printf("8. Incremental Number Pattern with Repeats:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    // 9. Print an incremental number triangle
    printf("9. Incremental Number Triangle:\n");
    int count = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    
    // 10. Print a pyramid of asterisks
    printf("10. Pyramid of Asterisks:\n");
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

