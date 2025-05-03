#include<stdio.h>

int main()
{
     //millennim to months
     int mill,cen,year,month;

     printf("Enter number :");
     scanf("%d",&mill);

     cen = mill * 10;
     year = cen * 100;
     month = year * 12;
     
     printf("millennim to months: %d\n", month);

}