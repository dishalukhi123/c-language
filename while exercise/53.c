#include <stdio.h>

int main() {
    int val = 0, rem = 0, biner, muli = 1;

    printf("Enter a binary value: ");
    scanf("%d", &biner);

    while (biner > 0) {
        rem = biner % 10;
        val = val + (rem * muli);  
        muli = muli * 2;          
        biner = biner / 10;       
    }

    printf("Decimal equivalent: %d\n", val);

    return 0;
}
