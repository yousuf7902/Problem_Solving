#include <stdio.h>

int main()
{
    int num, i, even = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even++;
        }
    }

    printf("%d valores pares\n", even);
    return 0;
}