#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a alphabet :");
    scanf("%c",&ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("alphabet");
    }else{
        printf("not alphabet");
    }
    
    return 0;
}
