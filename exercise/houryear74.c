#include<stdio.h>
int main()
{
    int hour,day,year;

    printf("Enter a number of hours :");
    scanf("%d",&hour);

    day = hour / 24;
    year = day / 365;

    printf("your value is :%d",year);
    return 0;
}
