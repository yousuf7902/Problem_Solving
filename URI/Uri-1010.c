#include <stdio.h>

int main()
{
    int product1, unit_p1, product2, unit_p2;
    float price_p1, price_p2, total_p1, total_p2, total;
    scanf("%d %d %f %d %d %f", &product1, &unit_p1, &price_p1, &product2, &unit_p2, &price_p2);
    total_p1 = unit_p1 * price_p1;
    total_p2 = unit_p2 * price_p2;
    total = total_p1 + total_p2;
    printf("VALOR A PAGAR: R$ %0.2f\n", total);

    return 0;
}