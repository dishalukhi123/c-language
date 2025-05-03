#include <stdio.h>

int main()
{
    float months, mill;

    printf("Enter number of months: ");
    scanf("%f", &months);

    mill = months / 12000.0;

    printf("Months to millennium: %.2f\n", mill);

    return 0;
}
