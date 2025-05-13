#include <stdio.h>
int main()
{
    int val, rev = 0, ren = 0, tem ;

    printf("Enter palindrome value:-");
    scanf("%d",&val);
    tem=val;
    while (val > 0)
    {
        ren = val % 10;
        rev = (rev * 10) + ren;
        val = val / 10;
    }

    if (tem == rev)
    {
        printf("palindrome\n",val);
    }
    else
    {
        printf("not palindrome\n",val);
    }

    return 0;
}
