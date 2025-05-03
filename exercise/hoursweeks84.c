#include<stdio.h>
int main()
{
    int hour,day,week;

    printf("Enter a number of hours :");
    scanf("%d",&hour);

    day = hour / 24;
    week = day / 52;

    printf("your value is :%d",week);
    return 0;
}
