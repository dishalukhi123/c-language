//11011
//11011
//00000
//11011
//11011
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 3)
                printf("0");
            else if(j == 1 || j == 2 || j == 4 || j == 5)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
