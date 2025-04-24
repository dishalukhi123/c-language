#include<stdio.h>

int main()
{
     //millennim to decades
     int mill,cen,dec;

     printf("Enter number :");
     scanf("%d",&mill);

     cen = mill * 1000;
     dec = cen * 100;
     
     
     printf("millennim to decades: %d\n", dec);

}