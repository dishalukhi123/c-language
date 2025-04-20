#include <stdio.h>

int main()
{
    float mtr, inches;

    printf("Enter meters: ");
    scanf("%f", &mtr);

    inches = (mtr * 100) / 2.54;

    printf("Meters to inches: %.2f\n", inches);

    return 0;
}
