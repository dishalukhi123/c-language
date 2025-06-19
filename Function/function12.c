// 12. Get Highest value of two values using functions.
#include <stdio.h>
int getHighest(int, int);
int getHighest(int val1, int val2)
{
    if(val1 > val2)
        return val1;
    else
        return val2;
}

int main() {
    printf("Highest value = %d\n", getHighest(20, 40));
    printf("Highest value = %d\n", getHighest(43, 25));
    return 0;
}
