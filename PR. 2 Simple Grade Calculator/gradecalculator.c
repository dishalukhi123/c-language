#include <stdio.h>
int main()
{
    int val;

    printf("Enter your score :-");
    scanf("%d", &val);

    if (val >= 91 && val <= 100)
    {
        printf("your gread is A. Excellent work!");
    }
    else if (val >= 81 && val <= 90)
    {
        printf("your gread is B. Excellent work! you are eligible for the next level.");
    }
    else if (val >= 61 && val <= 80)
    {
        printf("your gread is C. Excellent work!");
    }
    else if (val >= 41 && val <= 60)
    {
        printf("your gread is D. Excellent work!");
    }
    else
    {
        printf("fail");
    }

    return 0;
}
