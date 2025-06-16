//    5
//   54
//  543
// 5432
//54321
#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(j = 5; j >= 6 - i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
