#include<stdio.h>
int main()
{
    int val;

    printf("Enter a number of week :");
    scanf("%d",&val);

    if (val == 1)
    {
        printf("Monday\n");
    }else if (val == 2)
    {
        printf("Tuesday\n");
    }else if (val == 3)
    {
        printf("Wednesday\n");
    }else if (val == 4)
    {
        printf("Thursday\n");
    }else if (val == 5)
    {
        printf("Friday\n");
    }else if (val == 6)
    {
        printf("Saturday");
    }else if (val == 7)
    {
        printf("Sunday\n");
    }else{
        printf("invalid input");
    }
    return 0;
}
