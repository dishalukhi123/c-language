#include <stdio.h>

int main() {
    int n = 10;
    int first = 0, second = 1, next;

    printf("Fibonacci series up to 10 steps:\n");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
        } else if (i == 2) {
            printf("%d ", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("%d ", next);
        }
    }

    printf("\n");
    return 0;
}
