#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[100];
    ;
    for (int i = 0; i < 100; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < 100; j++)
    {
        if (a[j] <= 10)
        {
            cout << fixed << setprecision(1) << "A[" << j << "] = " << a[j] << endl;
        }
    }
}