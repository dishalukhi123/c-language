#include<stdio.h>
int main()
{
    int mint,hour,day,week;

    printf("Enter a number of week :");
    scanf("%d",&mint);

    hour = mint /60;
    day = hour / 24;
    week = day /7;

    printf("Approximate week : %d",week);

    return 0;
}
