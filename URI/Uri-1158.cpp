#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, x, y, count = 0, sum = 0;
    cin >> num;
    while (num--)
    {
        cin >> x >> y;
        for (int i = x;; i++)
        {
            if (i % 2 != 0)
            {
                count++;
                sum = sum + i;
            }
            if (count == y)
            {
                cout << sum << endl;
                sum = 0;
                count = 0;
                break;
            }
        }
    }
}