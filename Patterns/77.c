//12345
//21234
//32123
//43212
//54321
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }
        for(j = 2; j <= 6 - i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
