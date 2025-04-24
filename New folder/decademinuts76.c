#include<stdio.h>
int main()
{
    int dec,week,day,hour,mint;

    printf("Enter a number of decade :");
    scanf("%d",&dec);

    week = dec * 10;
    day = week * 52;
    hour = day * 24;
    mint = hour * 60;

    printf("your value is :%d",mint);
    return 0;
}
