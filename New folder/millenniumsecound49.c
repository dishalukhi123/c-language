#include<stdio.h>

int main()
{
     //millennim to secounds
     int mill,cen,year,day,hour,mint,sec;

     printf("Enter number :");
     scanf("%d",&mill);

     cen = mill * 10;
     year = cen * 100;
     day = year * 365;
     hour = day * 24;
     mint = hour * 60;
     sec = mint * 60;
     
     printf("millennim to secounds: %d\n", sec);

}