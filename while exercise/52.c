#include <stdio.h>
int main()
{
    int val, rem = 0, binary = 0, muli = 1;
    printf("Enter a numebr");
    scanf("%d", &val);
    while (val > 0)
    {
        rem = val % 2;
        binary = binary + (rem * muli);
        muli = muli * 10;
        val = val / 2;
    }
    printf("%d", binary);
    return 0;
}
