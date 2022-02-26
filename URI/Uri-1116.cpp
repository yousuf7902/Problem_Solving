#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    float result;
    cin >> n;

    while (n)
    {
        cin >> x >> y;
        if (x != 0 && y != 0)
        {
            result = (float)x / y;
            cout << fixed << setprecision(1);
            cout << result << endl;
        }
        else if (x != 0 && y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else if (x == 0 && y != 0)
        {
            result = 0;
            cout << fixed << setprecision(1);
            cout << result << endl;
        }
        n--;
    }
}