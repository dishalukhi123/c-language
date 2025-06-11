#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1, no;

    printf("Enter ni :-");
    scanf("%d", &no);

    while (i <= 10)
    {
        printf("%d * %d = %d\n", no, i, no * i);
        i++;
    }

    return 0;
}
