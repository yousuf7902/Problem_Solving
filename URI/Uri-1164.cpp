#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum = 0, num;
    cin >> num;
    while (num--)
    {
        cin >> x;
        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == x)
        {
            cout << x << " eh perfeito" << endl;
        }
        else
        {
            cout << x << " nao eh perfeito" << endl;
        }
        sum = 0;
    }
    return 0;
}