#include<stdio.h>
int main()
{
    int dec,week,day;

    printf("Enter a number of decade :");
    scanf("%d",&dec);

    week = dec * 10;
    day = week * 52;


    printf("your value is :%d",day);
    return 0;
}
