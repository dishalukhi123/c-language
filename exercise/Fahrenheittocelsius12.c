#include<stdio.h>

int main()
{
     //Fahrenheit to celsius
     int fah,cel;

     printf("Enter number :");
     scanf("%d",&fah);

     cel = (fah - 32) * 5 / 9;
     
     printf("Temperature in Celsius: %d\n", cel);

}