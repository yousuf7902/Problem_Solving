#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, z, count = 0, sum = 0;
    cin >> x;
    while (1)
    {
        cin >> z;
        if (z > x)
        {
            break;
        }
    }
    for (int i = x;; i++)
    {
        count++;
        sum = sum + i;
        if (sum > z)
        {
            cout << count << endl;
            break;
        }
    }
}