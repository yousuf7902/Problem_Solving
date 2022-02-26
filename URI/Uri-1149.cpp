#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, sum = 0;
    cin >> a >> n;
    while (n <= 0)
    {
        cin >> n;
    }
    for (int i = a; i < n + a; i = i + 1)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}