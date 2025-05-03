#include <stdio.h>

int main()
{
    int weeks, days;

    printf("Enter number of weeks: ");
    scanf("%d", &weeks);

    days = weeks * 7;

    printf("Weeks to days: %d\n", days);

    return 0;
}
