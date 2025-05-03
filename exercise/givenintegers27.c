#include <stdio.h>

int main() {
    int a, b, c, result;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b)
        result = c;
    else if (a == c)
        result = b;
    else if (b == c)
        result = a;
    else
        result = a + b + c;

    printf("Result = %d\n", result);

    return 0;
}
