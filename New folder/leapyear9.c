#include<stdio.h>
int main(int argc, char const *argv[])
{
    int val;

    printf("Enter year :");
    scanf("%d",&val);

    if (val % 4 == 0)
    {
        printf("leap year");
    }else{
        printf("not leap year");
    }
    
    return 0;
}
