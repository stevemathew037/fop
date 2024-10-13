#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    char *found;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the word to find: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    found = strstr(str, word);

    if (found) {
        printf("Word found at position: %ld\n", found - str);
    } else {
        printf("Word not found.\n");
    }

    return 0;
}

