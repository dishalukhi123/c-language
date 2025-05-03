#include<stdio.h>

int main()
{
     //millennim to years
     int mill,cen,year;

     printf("Enter number :");
     scanf("%d",&mill);

     cen = mill * 10;
     year = cen * 100;
     
     printf("millennim to years: %d\n", year);

}