#include<stdio.h>
int main()
{
    float day ,year ,dac,cen;

    printf("Enter a number : ");
    scanf("%f",&day);

    year =  day / 365;
    dac = year / 10;
    cen = dac / 100;

    printf("days to decades : %f",cen);
    return 0;
}
