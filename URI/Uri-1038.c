#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    float total = 0;
    if (X == 1)
    {
        total = (float)(4.00 * Y);
    }
    else if (X == 2)
    {
        total = (float)(4.50 * Y);
    }
    else if (X == 3)
    {
        total = (float)(5.00 * Y);
    }
    else if (X == 4)
    {
        total = (float)(2.00 * Y);
    }
    else if (X == 5)
    {
        total = (float)(1.50 * Y);
    }

    printf("Total: R$ %0.2f\n", total);
    return 0;
}