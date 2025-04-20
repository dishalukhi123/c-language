#include<stdio.h>
int main()
{
    int mint,hour,day,cent;

    printf("Enter a number :");
    scanf("%d",&mint);

    hour = mint / 60;
    day = hour / 24;
    cent = day / 365;
    
    printf("minetes to centuries :%d",cent);
    
    return 0;
}
