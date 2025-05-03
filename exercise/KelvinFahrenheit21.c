#include<stdio.h>
int main()
{
    int K,fah;
    printf("Enter a number :");
    scanf("%d",&K);

    fah = (K-273.15)*9/5+32;

    printf("Fahrenheit is  :%d",fah);
    
    return 0;
}
