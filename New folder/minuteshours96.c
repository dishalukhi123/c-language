#include<stdio.h>

int main()
{
    //minutes to days
    int mint,hour;

    printf("Enter a number :");
    scanf("%d",&mint);

    hour = mint / 60;

    printf("minutes to days :%d",hour);

    return 0;
}
