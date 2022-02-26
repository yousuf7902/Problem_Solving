#include <stdio.h>

int main()
{

    int N, hour, min, sec;
    scanf("%d", &N);
    hour = N / 3600;
    min = (N - (hour * 3600)) / 60;
    sec = N - ((min * 60) + (hour * 3600));

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}