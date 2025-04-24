#include<stdio.h>

int main()
{
    //minutes to months
    int mint,hour,month;

    printf("Enter a number :");
    scanf("%d",&mint);

    hour = mint / 60;
    month = hour / 12;

    printf("minutes to days :%d",month);

    return 0;
}
