//12345
//23451
//34521
//45321
//54321
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i + j <= 6)
                printf("%d", i + j - 1);
            else
                printf("%d", 6 - j);
        }
        printf("\n");
    }

    return 0;
}
