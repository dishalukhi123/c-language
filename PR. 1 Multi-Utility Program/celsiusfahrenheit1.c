#include<stdio.h>

int main()
{
     //celsius to Fahrenheit 
     int cel,fah;

     printf("Enter a number of celsius :");
     scanf("%d",&cel);

     fah = ( 9/5 * cel ) + 32;
     
     printf("Temperature in Celsius: %d\n", fah);

}