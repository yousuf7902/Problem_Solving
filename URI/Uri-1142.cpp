#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            sum++;
            if (sum % 4 == 0)
            {
                cout << "PUM";
            }
            else
            {
                cout << sum << " ";
            }
        }
        cout << endl;
    }
}