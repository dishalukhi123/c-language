#include<stdio.h>
int main()
{
    int x;
    float val;
    printf("Enter float value :");
    scanf("%f", &val);

    x = val;

    printf("Your output is: %.2f\n", (x - val));

    return 0;
}
