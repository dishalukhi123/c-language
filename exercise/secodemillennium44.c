#include<stdio.h>
int main()
{
    int sec,mint,hour,day,week,year,mill;

    printf("Enter e number : ");
    scanf("%d",&sec);

    mint = sec / 60 ;
    hour = mint /60 ;
    day = hour / 24 ;
    year = day / 365 ;
    mill = year / 1000;

    printf("minutes to millenninum : %d",mill);

    return 0;
}
