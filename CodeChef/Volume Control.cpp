#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x < y)
        {
            int count = 0;
            for (int i = x; i <= y; i++)
            {
                count++;
            }
            cout << count-1 << endl;
        }
        else
        {
            int count = 0;
            for (int i = x; x >= y; x--)
            {
                count++;
            }
            cout << count-1 << endl;
        }
    }

    return 0;
}