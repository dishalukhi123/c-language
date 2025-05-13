#include <stdio.h>
int main()
{
    int val, rem = 0, sum = 0, tem ;

    printf("Enter armstorng value:-");
    scanf("%d",&val);
    tem=val;
    while (val > 0)
    {
        rem = val % 10;
        sum = sum + (rem *rem*rem);
        val = val / 10;
    }

    if (tem == sum)
    {
        printf("armstorng\n",val);
    }
    else
    {
        printf("not armstorng\n",val);
    }

    return 0;
}
