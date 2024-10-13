#include <stdio.h>

int main() {
    int sum = 0;

    printf("Numbers between 50 and 70 that are divisible by 7:\n");

    for (int i = 51; i < 70; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of these numbers: %d\n", sum);

    return 0;
}

