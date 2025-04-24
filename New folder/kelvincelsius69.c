#include<stdio.h>
int main()
{
    int kel,cel;

    printf("Enter a numer of kelvin :");
    scanf("%d",&kel);

    cel = kel - 273.15;

    printf("approximent value :%d",cel);
    return 0;
}
