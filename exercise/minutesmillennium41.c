#include<stdio.h>
int main()
{
    int mint,hour,day,week,year,mill;

    printf("Enter e number : ");
    scanf("%d",&mint);

    hour = mint /60 ;
    day = hour / 24 ;
    year = day / 365 ;
    mill = year / 1000;

    printf("minutes to millenninum : %d",mill);

    return 0;
}
