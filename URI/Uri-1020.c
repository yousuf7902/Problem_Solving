#include <stdio.h>

int main()
{

    int age, years, months, days;
    scanf("%d", &age);
    years = age / 365;
    age = age - (years * 365);
    months = age / 30;
    age = age - (months * 30);
    days = age;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}