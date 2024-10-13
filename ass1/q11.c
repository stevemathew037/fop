#include <stdio.h>

int main() {
    int choice;
    int i;

    printf("Select the loop to use:\n");
    printf("1. While loop\n");
    printf("2. Do...while loop\n");
    printf("3. For loop\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            i = 1;
            while (i <= 10) {
                printf("%d ", i);
                i++;
            }
            break;
        
        case 2:
            i = 1;
            do {
                printf("%d ", i);
                i++;
            } while (i <= 10);
            break;
        
        case 3:
            for (i = 1; i <= 10; i++) {
                printf("%d ", i);
            }
            break;
        
        default:
            printf("Invalid choice.\n");
            break;
    }

    printf("\n");
    return 0;
}

