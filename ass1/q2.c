#include <stdio.h>

int main() {
    int int1, int2;
    int intSum, intProduct;
    float intDivision;

    float float1, float2;
    float floatSum, floatProduct, floatDivision;

    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &float1, &float2);

    intSum = int1 + int2;
    intProduct = int1 * int2;
    intDivision = (float)int1 / int2;

    floatSum = float1 + float2;
    floatProduct = float1 * float2;
    floatDivision = float1 / float2;

    printf("\nInteger Operations:\n");
    printf("Sum: %d + %d = %d\n", int1, int2, intSum);
    printf("Product: %d * %d = %d\n", int1, int2, intProduct);
    printf("Division: %d / %d = %.2f\n", int1, int2, intDivision);

    printf("\nFloating-Point Operations:\n");
    printf("Sum: %.2f + %.2f = %.2f\n", float1, float2, floatSum);
    printf("Product: %.2f * %.2f = %.2f\n", float1, float2, floatProduct);
    printf("Division: %.2f / %.2f = %.2f\n", float1, float2, floatDivision);

    return 0;
}

