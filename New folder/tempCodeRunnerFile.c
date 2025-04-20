#include<stdio.h>
int main()
{
    int day ,hour,mint,sec;

    printf("Enter a number : ");
    scanf("%d",&day);

    hour = day * 24;
    mint = hour * 60;
    sec = mint * 60;



    printf("days to decades : %d",sec);
    return 0;
}
