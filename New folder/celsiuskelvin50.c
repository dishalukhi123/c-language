#include<stdio.h>

int main()
{
     //celsius to kelvin 
     int cel,kel;

     printf("Enter number :");
     scanf("%d",&cel);

     kel = cel + 273.15;
     
     printf("Temperature in Celsius: %d\n", kel);

}