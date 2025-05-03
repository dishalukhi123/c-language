#include<stdio.h>
int main()
{
    int val;

    printf("Enter a number of months :");
    scanf("%d",&val);

    if (val == 1 || val == 3 || val == 5 || val == 7 || val == 9 || val == 11)
    {
        printf("31 days\n");
    }else if (val == 2 || val == 4 || val == 6 || val == 8 || val == 10 || val == 12)
    {
        printf("30 days\n");
    }else{
        printf("invilde input");
    }
    
    return 0;
}
