#include<stdio.h>

int main()
{
     //years to secodes
     int year,day,hr,min,sec;

     printf("Enter number of years :");
     scanf("%d",&year);

     day = year * 365 ;
     hr = day * 24 ;
     min = hr * 60;
     sec = min * 60;

     printf("%d years = %d secodes",year,sec);


}