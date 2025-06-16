//    1
//   212
//  32123
// 4321234
//543212345
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }

        for(j = 2; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
