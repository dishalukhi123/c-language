#include<stdio.h>
int main()
{
    int dec,week,hour;

    printf("Enter a number of decades :");
    scanf("%d",&dec);

    week = dec * 52 ; 
    hour = week * 24;

    printf("Approximate value is  : %d", hour);
    return 0;
}
