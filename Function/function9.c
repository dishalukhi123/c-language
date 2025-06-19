//9. Find Highest value of two values using functions.
#include <stdio.h>
void findHighest(int, int);
int main()
{
    findHighest(20, 40);
    findHighest(50, 30);
    findHighest(15, 15);
    return 0;
}
void findHighest(int val1, int val2)
{
    if(val1 > val2)
        printf("%d is bigger than %d\n", val1, val2);
    else if(val2 > val1)
        printf("%d is bigger than %d\n", val2, val1);
    else
        printf("%d is equal to %d\n", val1, val2);
}