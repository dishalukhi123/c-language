#include <stdio.h>

int main() {
    int i, j, n = 5;
    int start;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        start = (i % 2 == 0) ? 1 : 0;

        for (j = 0; j < n - i; j++) {
            printf("%d", start);
            start = 1 - start;  
        }

        printf("\n");
    }

    return 0;
}
