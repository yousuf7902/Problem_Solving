#include <stdio.h>

int main()
{
    int N, i, multi;
    scanf("%d", &N);
    if (N > 5 && N < 20000)
    {
        for (i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                multi = i * i;
                printf("%d^2 = %d\n", i, multi);
            }
        }
    }
}