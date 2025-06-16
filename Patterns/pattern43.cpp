//56789
// 4567
//  345
//   23
//    1
#include <stdio.h>

int main() {
    int i,j,s;
    for (i = 5; i >= 1; i--) {
        for (s = 0; s < 5 - i; s++) {
            printf(" ");
        }
        for (j = i; j < i * 2; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


