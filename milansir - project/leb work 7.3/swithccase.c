#include <stdio.h>
int main()
{
    int ch, val;

    printf("Press 1 speak English Language\n");
    printf("Press 2 speak Gujarati Language\n");
    printf("Press 3 speak Hindi Language :-");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("Press 1 for internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            printf("you have successfully done a internet Recharge\n");
            break;

        case 2:
            printf("you have successfully done a Top-up Recharge\n");
            break;

        case 3:
            printf("you have successfully done a Special Recharge\n");
            break;

        default:
            printf("Invild number");
            break;
        }
        break;

    case 2:

        printf("internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            printf("apne safaltapurvak internet Recharge ke liye he\n");
            break;

        case 2:
            printf("apne safaltapurvak Top-up Recharge liye he\n");
            break;

        case 3:
            printf("apne safaltapurvak Special Recharge liye he\n");
            break;

        default:
            printf("Invild number");
            break;
        }
        break;

    case 3:

        printf("internet Recharge mate 1 babavo\n");
        printf("Top-up Recharge mate 2 babavo\n");
        printf("Special Recharge mate 3 babavo\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            printf("tame safaltapurvak internet Recharge karyu chhe.\n");
            break;

        case 2:
            printf("tame safaltapurvak Top-up Recharge karyu chhe.\n");
            break;

        case 3:
            printf("tame safaltapurvak Special Recharge karyu chhe.\n");
            break;

        default:
            printf("Invild number");
            break;
        }
        break;

    default:
        printf("Invild number");
        break;
    }

    // switch (ch1)
    // {
    //     case 1:
    //      printf("English Language");
    //     break;

    //     case 2:
    //      printf("Gujarati Language");
    //     break;

    //     case 3:
    //      printf("Hindi Language");
    //     break;

    //     default:
    //      printf("invalid choise");
    //     break;
    // }
    return 0;
}
