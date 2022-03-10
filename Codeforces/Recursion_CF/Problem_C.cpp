#include <bits/stdc++.h>

using namespace std;

void show(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        cout << n;
    }
    else
    {
        cout << n << " ";
    }

    --n;
    show(n);
}

int main()
{
    int n;
    cin >> n;

    show(n);

    return 0;
}