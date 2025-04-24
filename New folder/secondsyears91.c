#include<stdio.h>
int main()
{
    long long sec;
    int mint,hour,day,month,year;

    printf("Enter e number : ");
    scanf("%lld",&sec);

    mint = sec / 60 ;
    hour = mint /60 ;
    day = hour / 24 ;
    month = day / 12 ;
    year = month / 10;

    printf("minutes to centuries : %d",month);

    return 0;
}
