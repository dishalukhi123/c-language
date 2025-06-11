#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter a number of A: ");
    scanf("%d", &a);

    printf("Enter a number of B: ");
    scanf("%d", &b);

    printf("Enter a number of C: ");
    scanf("%d", &c);

    printf("Enter a number of D: ");
    scanf("%d", &d);

    printf("Enter a number of E: ");
    scanf("%d", &e);

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    printf("a is big\n");
                } else {
                    printf("e is big\n");
                }
            } else {
                if (d > e) {
                    printf("d is big\n");
                } else {
                    printf("e is big\n");
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("c is big\n");
                } else {
                    printf("e is big\n");
                }
            } else {
                if (d > e) {
                    printf("d is big\n");
                } else {
                    printf("e is big\n");
                }
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    printf("b is big\n");
                } else {
                    printf("e is big\n");
                }
            } else {
                if (d > e) {
                    printf("d is big\n");
                } else {
                    printf("e is big\n");
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("c is big\n");
                } else {
                    printf("e is big\n");
                }
            } else {
                if (d > e) {
                    printf("d is big\n");
                } else {
                    printf("e is big\n");
                }
            }
        }
    }

    return 0;
}
