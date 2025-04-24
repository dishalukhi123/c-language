#include<stdio.h>
int main()
{
    long long sec;
    int mint,hour,day,week,year,dec;

    printf("Enter e number : ");
    scanf("%lld",&sec);

    mint = sec / 60 ;
    hour = mint /60 ;
    day = hour / 24 ;
    year = day / 365 ;
    dec = year / 10;

    printf("minutes to centuries : %d",dec);

    return 0;
}
