#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, n[10], num;
    cin >> v;

    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << v << endl;
        v = v * 2;
    }
}