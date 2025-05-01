#include <stdio.h>

int main()
{
    float unit, ch = 0, sr = 0;

    printf("Enter number of units: ");
    scanf("%f", &unit);

    if (unit <= 50) {
        ch = unit * 0.5;
    }
    else if (unit <= 150) {
        ch = 50 * 0.5 + (unit - 50) * 0.75;
    }
    else if (unit <= 250) {
        ch = 50 * 0.5 + 100 * 0.75 + (unit - 150) * 1.2;
    }
    else {
        ch = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (unit - 250) * 1.5;
    }

    sr = ch * 0.2;  
    ch += sr;

    printf("Total Electricity Bill: Rs. %.2f\n", ch);

    return 0;
}
