#include <stdio.h>

int main()
{

    double A, R, n;
    n = 3.14159;
    scanf("%lf", &R);

    A = n * (R * R);
    printf("A=%0.4lf\n", A);

    return 0;
}