#include<stdio.h>
int main(int argc, char const *argv[])
{
    int val;

    printf("Enter a number :");
    scanf("%d",&val);

    if (val > 0)
    {
        printf("number is positive");
    }else{
        printf("number is negative:");
    }
    
    return 0;
}
