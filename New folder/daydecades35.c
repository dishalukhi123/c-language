#include<stdio.h>
int main()
{
    float day ,year ,dac;

    printf("Enter a number : ");
    scanf("%f",&day);

    year =  day / 365;
    dac = year / 10;

    printf("days to decades : %f",dac);
    return 0;
}
