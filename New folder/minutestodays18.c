#include<stdio.h>

int main()
{
    //minutes to days
    int mint,hour,day;

    printf("Enter a number :");
    scanf("%d",&mint);

    hour = mint / 60;
    day = hour / 24;

    printf("minutes to days :%d",day);

    return 0;
}
