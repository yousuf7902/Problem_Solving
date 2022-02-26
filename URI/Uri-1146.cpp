#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    while (1)
    {
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            if (i == x)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
            }
        }
        if (x == 0)
        {
            break;
        }
    }
    return 0;
}