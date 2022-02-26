#include <stdio.h>

int main()
{
    int hours, km, total_km;
    double f_need;
    scanf("%d %d", &hours, &km);
    total_km = hours * km;
    f_need = total_km / 12.0;
    printf("%.3lf\n", f_need);
    return 0;
}