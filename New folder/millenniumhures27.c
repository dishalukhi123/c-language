#include<stdio.h>

int main()
{
     //millennim to hours
     int mill,cen,year,day,hour;

     printf("Enter number :");
     scanf("%d",&mill);

     cen = mill * 1000;
     year = cen * 100;
     day = year * 365;
     hour = day * 24;
     
     printf("millennim to hours: %d\n", hour);

}