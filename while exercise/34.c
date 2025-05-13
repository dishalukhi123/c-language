#include <stdio.h>

int main()
{
    int val, num, fd, ld;
    int temp, multiplier = 1, middle, swapped;

    printf("Enter a value: ");
    scanf("%d", &val);

    num = val;
    ld = num % 10;
    temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        multiplier *= 10;
    }
    fd = temp;

    middle = (num % multiplier) / 10;

    swapped = ld * multiplier + middle * 10 + fd;

    printf("Swapped value is: %d\n", swapped);

    return 0;
}
