#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n[20], temp, i, j;
    for (i = 0; i < 20; i++)
    {
        cin >> n[i];
    }
    for (i = 0, j = 19; i < 20, j >= 0; i++, j--)
    {
        if (i < j)
        {
            temp = n[i];
            n[i] = n[j];
            n[j] = temp;
        }
    }
    for (i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}