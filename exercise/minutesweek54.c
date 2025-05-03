#include <stdio.h>

int main()
{
    int days, months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30; 

    printf("Approximate months: %d\n", months);

    return 0;
}
