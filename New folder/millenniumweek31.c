#include<stdio.h>

int main()
{
     //millennim to week
     int mill,cen,year,week;

     printf("Enter number :");
     scanf("%d",&mill);

     cen = mill * 10;
     year = cen * 100;
     week = year * 52;
     
     printf("millennim to week: %d\n", week);

}