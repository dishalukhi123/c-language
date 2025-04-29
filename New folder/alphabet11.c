#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a alphabet :");
    scanf("%c",&ch);

    if ((ch == 'A' && ch == 'Z'))
    {
        printf("alphabet");
    }else if ((ch == 'A'))
    {
        printf("vowel");
    }
    else
    {
        printf("not alphabet");
    }
    
    return 0;
}
