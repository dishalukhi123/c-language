#include<stdio.h>
int main()
{
    int ch,a,b;

    printf("Press 1 Addition:\n");
    printf("Press 2 Subtraction\n:");
    printf("Press 3 Multiplication:\n");
    printf("Press 4 Division:\n");
    printf("Press 5 Modulus:\n");

    scanf("%d",&ch);

    printf("Enter a number of A :");
    scanf("%d",&a);
    printf("Enter a number of A :");
    scanf("%d",&b);

    switch (ch)
    {
        case 1:
            printf("Additione :%d", a + b);
            break;
        
        case 2:
            printf("Subtraction :%d", a - b);
            break;

        case 3:
            printf("Multiplication :%d", a * b);
            break;

        case 4:
            printf("Division :%d", a / b);
            break;

        case 5:
            printf("Modulus :%d", a % b);
            break;
        
        default:
            printf("invalid choise");
            break;
    }


    return 0;
}
