#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == '.')
        {
            a[i] = '0';
        }
        else if (a[i] + a[i + 1] == '-' + '.')
        {
            a[i] = '1';
        }
        else if (a[i] + a[i + 1] == '-' + '-')
        {
            a[i] = '2';
        }
    }
    cout << a << endl;
    return 0;
}