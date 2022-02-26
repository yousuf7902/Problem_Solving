#include <stdio.h>

int main()
{
    int num, i, positive = 0, negative = 0, even = 0, odd = 0;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &num);

        if (num > 0)
        {
            positive++;
        }
        if (num < 0)
        {
            negative++;
        }

        if (num % 2 == 0)
        {
            even++;
        }
        if (num % 2 != 0)
        {
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
}