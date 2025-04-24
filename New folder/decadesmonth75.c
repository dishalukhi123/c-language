#include<stdio.h>
int main()
{
    int dec,month;

    printf("Enter a number : ");
    scanf("%d",&dec);

    month = dec * 12;

    printf("decades to months :%d",month);
    return 0;
}
