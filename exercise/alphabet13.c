#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a alphabet :");
    scanf("%c",&ch);

    if ((ch >= 'A' && ch <= 'Z'))
    {
        printf("uppercase alphabet");
    }else if ((ch >= 'a' && ch <= 'z'))
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not alphabet");
    }
    
    return 0;
}
