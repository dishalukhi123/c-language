#include <stdio.h>
int main()
{
    int val;

    printf("Enter your score :-");
    scanf("%d", &val);

    (val >= 91 && val <= 100) ? printf("Your grade is A. Excellent work!\n") : (val >= 81 && val <= 90) ? printf("Your grade is B. Excellent work! You are eligible for the next level.\n")
                                                                           : (val >= 61 && val <= 80)   ? printf("Your grade is C. Excellent work!\n")
                                                                           : (val >= 41 && val <= 60)   ? printf("Your grade is D. Excellent work!\n")
                                                                                                        : printf("Fail\n");

    // if (val >= 91 && val <= 100)
    // {
    //     printf("your gread is A. Excellent work!");
    // }
    // else if (val >= 81 && val <= 90)
    // {
    //     printf("your gread is B. Excellent work! you are eligible for the next level.");
    // }
    // else if (val >= 61 && val <= 80)
    // {
    //     printf("your gread is C. Excellent work!");
    // }
    // else if (val >= 41 && val <= 60)
    // {
    //     printf("your gread is D. Excellent work!");
    // }
    // else
    // {
    //     printf("fail");
    // }

    return 0;
}
