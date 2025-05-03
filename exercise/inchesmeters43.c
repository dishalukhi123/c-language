#include <stdio.h>

int main()
{
    float inches, meters;

    printf("Enter length in inches: ");
    scanf("%f", &inches);

    meters = inches / 0.0254;

    printf("Inches to feet: %.2f\n", meters);

    return 0;
}
