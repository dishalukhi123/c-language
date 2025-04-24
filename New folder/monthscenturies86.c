#include <stdio.h>

int main()
{
    float months, cen;

    printf("Enter number of months: ");
    scanf("%f", &months);

    cen = months / 1200.0;

    printf("Months to millennium: %.2f\n", cen);

    return 0;
}
