#include<stdio.h>
int main()
{
    int week,day,hour,mint;

    printf("Enter a number of week :");
    scanf("%d",&week);

    day = week * 365;
    hour = day * 24;
    mint = hour * 60;

    printf("approximant value:%d",mint);
    return 0;
}
