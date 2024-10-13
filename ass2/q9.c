#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int n = strlen(str);
    char temp;
    int i, j; // Declare loop variables outside the for loops

    // Sorting the string using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100]; // Buffer to hold the string

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it's read by fgets
    str[strcspn(str, "\n")] = '\0'; 

    // Sort the string
    sortString(str);

    // Print the sorted string
    printf("Sorted string: %s\n", str);

    return 0;
}

