#include <stdio.h>

int main()
{
    float inches, feet;

    printf("Enter length in inches: ");
    scanf("%f", &inches);

    feet = inches / 12.0;

    printf("Inches to feet: %.2f\n", feet);

    return 0;
}
