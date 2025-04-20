#include<stdio.h>

int main()
{
     //centuries to minute
     int cen,year,week,day,hour,mint;

     printf("Enter number :");
     scanf("%d",&cen);

     cen = year * 100;
     week = cen * 52;
     day = week * 7;
     hour = day * 24;
     mint = hour * 60;
     
     printf("centuries to hours1: %d\n", mint);

}