#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 1;
    float sum = 0;
    for (int i = 1; i <= 39; i += 2)
    {
        sum = sum + ((float)i / num);
        num = num * 2;
    }
    cout << fixed << setprecision(2) << sum << endl;
}