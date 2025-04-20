#include<stdio.h>

int main()
{
     //centuries to hours
     int cen,year,week,day,hour;

     printf("Enter number :");
     scanf("%d",&cen);

     cen = year * 100;
     week = cen * 52;
     day = week * 7;
     hour = day * 24;
     
     printf("centuries to hours: %d\n", hour);

}