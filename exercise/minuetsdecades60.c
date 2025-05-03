#include<stdio.h>
int main()
{
    int mint,hour,day,year,dec;
    printf("Enter a number of minutes :");
    scanf("%d",&mint);

    hour = mint * 60;
    day = hour * 24;
    year = day * 365;
    dec = year * 10;

    printf("approximent decades : %d",dec);

    return 0;
}
