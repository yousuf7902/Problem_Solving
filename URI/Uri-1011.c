#include <stdio.h>
#define pi 3.14159

int main()
{
    double R, volume;
    scanf("%lf", &R);
    volume = (4 / 3.0) * pi * (R * R * R);
    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}