#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ch;

    printf("Press 1 speak English Language\n");
    printf("Press 2 speak Gujarati Language\n");
    printf("Press 3 speak Hindi Language :-");

    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
         printf("English Language");
        break;

        case 2:
         printf("Gujarati Language");
        break;

        case 3:
         printf("Hindi Language");
        break;
        
        default:
         printf("invalid choise");
        break;
    }
    return 0;
}
