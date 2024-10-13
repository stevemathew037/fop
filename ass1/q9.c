#include <stdio.h>

#define PI 3.14159

int main() {
    char shape;
    float area, length, width, radius, base, height;

    printf("Enter shape (C for circle, R for rectangle, T for triangle): ");
    scanf(" %c", &shape);

    switch (shape) {
        case 'C':
        case 'c':
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        
        case 'R':
        case 'r':
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        
        case 'T':
        case 't':
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;
        
        default:
            printf("Invalid shape\n");
    }

    return 0;
}

