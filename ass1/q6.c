#include <stdio.h>

int main() {
    int days, years, months, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    remainingDays = days % 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Remaining Days: %d\n", remainingDays);

    return 0;
}

