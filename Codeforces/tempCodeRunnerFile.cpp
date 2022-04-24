#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a, count = 0;
    cin >> n >> m >> a;

    if (n == a && m == a && n == m)
    {
        cout << a << endl;
    }
    else
    {
        while (n == a && m == a)
        {
            a++;
            count++;
        }
        if (count == 0)
        {
            cout << a << endl;
        }
        else
        {
            cout << count * 2 << endl;
        }
    }

    return 0;
}