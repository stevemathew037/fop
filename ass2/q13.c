#include <stdio.h>
#include <string.h>

int main() {
    char strings[100][100];
    char search[100];
    int n, found = 0;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    printf("Enter the string to search for: ");
    scanf("%s", search);

    for (int i = 0; i < n; i++) {
        if (strcmp(strings[i], search) == 0) {
            printf("String found at position: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("String not found.\n");
    }

    return 0;
}

