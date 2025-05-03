#include<stdio.h>

int main()
{
     //centuries to secode
     int cen,year,week,day,hour,mint,sec;

     printf("Enter number :");
     scanf("%d",&cen);

     cen = year * 100;
     week = cen * 52;
     day = week * 7;
     hour = day * 24;
     mint = hour * 60;
     sec = mint * 60;

     
     printf("centuries to seconds: %d\n", sec);

}