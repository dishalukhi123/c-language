#include<stdio.h>
int main()
{
    int month,day,hour;

    printf("Enterb a number of months :");
    scanf("%d",&month);

    day = month * 12;
    hour = day * 7 ;

    printf("Approximate hours : %d",hour);


    return 0;
}
