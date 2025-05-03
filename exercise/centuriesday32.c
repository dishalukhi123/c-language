#include <stdio.h>

int main()
{
    // centuries to day
    int cen, year, day;

    printf("Enter number: ");
    scanf("%d", &cen);

    year = cen * 100;
    day = year * 365;

    printf("Centuries to day: %d\n", day);

    return 0;
}
