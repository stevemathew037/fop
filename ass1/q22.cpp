#include <stdio.h>

int main() {
    int num, digit, sumEven = 0, sumOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        num /= 10;
    }

    printf("Sum of even digits: %d\n", sumEven);
    printf("Sum of odd digits: %d\n", sumOdd);

    return 0;
}

