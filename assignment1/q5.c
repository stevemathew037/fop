#include <stdio.h>

int main() {
    float basic, hra, da, totalSalary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    printf("Enter the HRA: ");
    scanf("%f", &hra);

    printf("Enter the DA: ");
    scanf("%f", &da);

    totalSalary = basic + hra + da;

    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}

