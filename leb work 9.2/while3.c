#include <stdio.h>
int main()
{
    int pv=0, cv=1, nv, i = 1;

    printf("%d %d", pv, cv);

    while (i <= 8)
    {
        nv = pv + cv;
        printf(" %d", nv);
        pv = cv;
        cv = nv;
        i++;
    }

    return 0;
}
