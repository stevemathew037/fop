#include <stdio.h>

float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 0; // Return 0 or handle error appropriately
            }
        default:
            printf("Error: Invalid operator.\n");
            return 0; // Return 0 or handle error appropriately
    }
}

int main() {
    float number1, number2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f", &number2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    result = calculate(number1, number2, operator);
    if (operator == '+' || operator == '-' || operator == '*' || (operator == '/' && number2 != 0)) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}

