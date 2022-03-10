#include <bits/stdc++.h>

using namespace std;

void show(string a, int i)
{
    if (i == a.size())
    {
        return;
    }
    cout << a[i] << " ";
    show(a, i + 1);
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int i = 0;
        string a;
        cin >> a;
        show(a, i);
        cout << endl;
    }

    return 0;
}