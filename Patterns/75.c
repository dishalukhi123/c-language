//12344
//23455
//34555
//45555
//55555
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j <= 5 - i + 1)
                printf("%d", i + j - 1);
            else
                printf("5");
        }
        printf("\n");
    }

    return 0;
}
