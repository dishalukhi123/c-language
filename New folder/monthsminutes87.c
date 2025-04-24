#include<stdio.h>
int main()
{
    int month,day,hour,mint;

    printf("Enterb a number of months :");
    scanf("%d",&month);

    day = month * 12;
    hour = day * 7 ;
    mint = hour * 60;

    printf("Approximate hours : %d",mint);


    return 0;
}
