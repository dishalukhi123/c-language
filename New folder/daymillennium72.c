#include<stdio.h>
int main()
{
    int day, week,dec,cen,mill;
    printf("Enter a number of day :");
    scanf("%d",&day);

    week = day / 52;
    dec = week / 10;
    cen = dec / 100;
    mill =cen / 1000;

    printf("your value is :%d",mill);
    return 0;
}
