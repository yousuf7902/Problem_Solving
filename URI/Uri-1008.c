#include <stdio.h>

int main()
{
    int number, hours;
    float salary, amount;
    scanf("%d %d %f", &number, &hours, &amount);
    salary = hours * amount;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2f\n", salary);

    return 0;
}
