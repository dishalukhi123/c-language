#include<stdio.h>
int main()
{
    int dec , cen;

    printf("Enter a number of decades :");
    scanf("%d",&dec);

    cen = dec / 10;

    printf("approximate value is :%d",cen);
    
    return 0;
}
