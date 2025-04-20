#include<stdio.h>
int main()
{
    int gram;
    float kg ;

    printf("Enter a number :");
    scanf("%d",&gram);

    kg = gram / 1000;
    
    printf("your kilograms :%f",kg);
    
    return 0;
}
