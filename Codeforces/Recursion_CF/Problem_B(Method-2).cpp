#include <bits/stdc++.h>

using namespace std;

void show(int a, int n)
{
    if (a > n)
    {
        return;
    }
    cout << a << endl;
    show(a + 1, n);
}

int main()
{
    int a, n;
    cin >> a >> n;

    show(a, n);

    return 0;
}