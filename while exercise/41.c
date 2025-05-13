#include <stdio.h>

int main() {
    int i;

    printf("ASCII Characters and their Values:\n");
    printf("----------------------------------\n");
    printf("Dec\tChar\n");
    printf("----------------------------------\n");

    for (i = 0; i < 128; i++) {
        if (i < 32 || i == 127)
            printf("%3d\tNon-printable\n", i);
        else
            printf("%3d\t%c\n", i, i);
    }

    return 0;
}
