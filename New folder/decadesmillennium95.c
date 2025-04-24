#include<stdio.h>
int main()
{
    int dec , cen ,mill;

    printf("Enter a number of decades :");
    scanf("%d",&dec);

    cen = dec / 10;
    mill = cen / 100;

    printf("approximate value is :%d",mill);
    
    return 0;
}
