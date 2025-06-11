#include <stdio.h>

int main()
{
    int a=1, num;

    printf("Enter a starting number: ");
    scanf("%d", &a); 

    // printf("Enter an ending number: ");
    // scanf("%d", &num); 

    do
    {
        if (a % 2 == 0)
        {
            printf("%d ", a); 
        }
        a++;
    } while (a <= num);

    return 0;
}
