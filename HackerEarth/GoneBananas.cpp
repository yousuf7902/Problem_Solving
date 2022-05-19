#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 7;

int a[mx];

void sieve()
{
    a[1] = 1;
    int i, j;

    for (int i = 4; i < mx; i += 2)
    {
        a[i] = 1;
    }
    for (i = 3; i < mx; i += 2)
    {
        if (a[i] == 0)
        {
            for (j = i + i; j < mx; j += i)
            {
                a[j] = 1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve();
    int t;
    cin >> t;

    while (t--)
    {

        int n, flag = 0;
        cin >> n;

        if (n == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            if (a[n] == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}

// Another way

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, flag = 0;
        cin >> n;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}