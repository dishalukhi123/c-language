#include <stdio.h>

int main()
{
    // centuries to weeks
    int cen, year, week;

    printf("Enter number: ");
    scanf("%d", &cen);

    year = cen * 100;
    week = year * 52;

    printf("Centuries to weeks: %d\n", week);

    return 0;
}
