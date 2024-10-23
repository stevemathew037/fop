#include <stdio.h>

int main() {
    int num, reverse = 0, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;         
        reverse = reverse * 10 + digit; 
        sum += digit;            
        num /= 10;             
    }

    printf("Reversed number: %d\n", reverse);
    printf("Sum of digits: %d\n", sum);

    return 0;
}

