#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[1000], t, count = 0;
    cin >> t;

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << count << endl;
        count++;
        if (count == t)
        {
            count = 0;
        }
    }
}