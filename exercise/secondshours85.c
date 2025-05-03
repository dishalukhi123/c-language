#include<stdio.h>
int main()
{
    int second,mint,hour;

    printf("Emter number :");
    scanf("%d",&second);

    mint = second / 60;
    hour = mint / 60;

    printf("your hour : %d",hour);
    
    return 0;
}
