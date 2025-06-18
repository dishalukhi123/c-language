//01110
//10001
//10001
//10001
//01110
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if((i == 1 || i == 5) && (j > 1 && j < 5))
                printf("1");
            else if((i >= 2 && i <= 4) && (j == 1 || j == 5))
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
