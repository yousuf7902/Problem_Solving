#include <stdio.h>

int main()
{
    double A, B, MEDIA;
    scanf("%0lf %lf", &A, &B);
    A = A * 3.5;
    B = B * 7.5;
    MEDIA = ((A + B) / (3.5 + 7.5));
    printf("MEDIA = %0.5lf\n", MEDIA);
    return 0;
}