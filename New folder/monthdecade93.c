#include <stdio.h>

int main()
{
    float months, dec;

    printf("Enter number of months: ");
    scanf("%f", &months);

    dec = months / 120.0;

    printf("Months to millennium: %.2f\n", dec);

    return 0;
}
