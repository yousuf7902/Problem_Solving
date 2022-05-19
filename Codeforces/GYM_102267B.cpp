#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int num1 = 2, num2, flag = 0;

    if (n - num1 < 2)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i < n - num1; i++)
        {
            if ((n - num1) % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << num1 << " " << n - num1 << endl;
    }
    return 0;
}

