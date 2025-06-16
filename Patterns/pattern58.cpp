//1       1
//12     21
//123   321
//1234 4321
//123454321
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int j = 0; j < (n - i) * 2; j++) {
            printf(" ");
        }

        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

