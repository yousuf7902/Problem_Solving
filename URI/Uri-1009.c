#include <stdio.h>

int main()
{
    double salary, products, percentage;
    char f_name[10];
    scanf("%s %lf %lf", f_name, &salary, &products);
    percentage = products * 0.15;
    salary = salary + percentage;
    printf("TOTAL = R$ %0.2lf\n", salary);
    return 0;
}