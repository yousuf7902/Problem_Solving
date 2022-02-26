#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num, n, count = 0;
    cin >> num;
    while (num--)
    {
        cin >> n;
        long long fixed[61];
        for (int i = 0;; i++)
        {
            if (i == 0 || i == 1)
            {
                fixed[i] = i;
                count = 1;
            }
            else
            {
                count++;
                fixed[i] = fixed[i - 1] + fixed[i - 2];
            }
            if (count == n)
            {
                cout << "Fib(" << n << ") = " << fixed[count] << endl;
                count = 0;
                break;
            }
            if (n == 0)
            {
                cout << "Fib(" << n << ") = " << fixed[n] << endl;
                break;
            }
        }
    }
}