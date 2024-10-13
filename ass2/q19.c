#include <stdio.h>

int sum_of_n(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum_of_n(n - 1);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The sum of the first %d numbers is %d\n", number, sum_of_n(number));
    }

    return 0;
}

