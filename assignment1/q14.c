#include <stdio.h>

int count_occurrences(const char *text, char character) {
    int count = 0;
    while (*text) {
        if (*text == character) {
            count++;
        }
        text++;
    }
    return count;
}

int main() {
    char text[1000];
    char character;
    
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter the character to count: ");
    scanf("%c", &character);

    int occurrences = count_occurrences(text, character);
    
    printf("Occurrences of '%c': %d\n", character, occurrences);
    
    return 0;
}

