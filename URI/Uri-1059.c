#include <stdio.h>

int main()
{
    int i, a;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            a = i;
            printf("%d\n", a);
        }
    }

    return 0;
}