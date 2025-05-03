#include <stdio.h>

int main()
{
    int day, month;

    printf("Enter number of days: ");
    scanf("%d", &day);

    month = day / 12; 

    printf("Approximate months: %d\n", month);
    
    return 0;
}
