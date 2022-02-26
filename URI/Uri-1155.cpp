#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 1;
    float sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + ((float)num / i);
    }
    cout << fixed << setprecision(2) << sum << endl;
}