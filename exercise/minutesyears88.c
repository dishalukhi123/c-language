#include<stdio.h>
int main()
{
    int mint,hour,day,week,year;

    printf("Enter a number of week :");
    scanf("%d",&mint);

    hour = mint /60;
    day = hour / 24;
    week = day / 7;
    year = week / 52;

    printf("Approximate week : %d",year);

    return 0;
}
