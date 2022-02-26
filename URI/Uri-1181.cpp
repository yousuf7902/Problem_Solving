#include <bits/stdc++.h>
using namespace std;

int main()
{
    float m[12][12], sum = 0, avg;
    int l;
    char t;
    cin >> l >> t;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[l][j];
            if (i == l)
            {
                sum = sum + m[l][j];
            }
        }
    }
    if (t == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (t == 'M')
    {
        avg = sum / 12.0;
        cout << fixed << setprecision(1) << avg << endl;
    }
}