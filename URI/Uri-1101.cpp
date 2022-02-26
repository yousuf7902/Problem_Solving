#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, big, small, sum = 0;

    while (1)
    {
        cin >> m >> n;
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else
        {
            big = max(m, n);
            small = min(m, n);
            for (int i = small; i <= big; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
            cout << "Sum=" << sum << endl;
            sum = 0;
        }
    }
}
