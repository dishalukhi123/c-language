#include<stdio.h>
int main()
{
    int week,day,hours,mint,sec;

    printf("Enter a number of week : ");
    scanf("%d",&week);

    day = week * 52;
    hours = day * 7;
    mint = hours * 24;
    sec = mint * 60;

    printf("approximent secound: %d",sec);
    return 0;
}
