#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);

    if ((2 * A) != 0 && (B * B - (4 * A * C)) > 0)
    {
        R1 = (-B + sqrt(B * B - (4 * A * C))) / (2 * A);
        R2 = (-B - sqrt(B * B - (4 * A * C))) / (2 * A);
        printf("R1 = %0.5lf\n", R1);
        printf("R2 = %0.5lf\n", R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}