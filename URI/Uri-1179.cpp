#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 15, num, even[5], odd[5], e = 0, o = 0, flag_even, flag_odd;
    while (i--)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            even[e] = num;
            e++;
        }
        else
        {
            odd[o] = num;
            o++;
        }

        if (e == 5)
        {
            for (int i = 0; i <= 4; i++)
            {
                cout << "par[" << i << "] = " << even[i] << endl;
            }
            e = 0;
        }
        if (o == 5)
        {
            for (int i = 0; i <= 4; i++)
            {
                cout << "impar[" << i << "] = " << odd[i] << endl;
            }
            o = 0;
        }

        if (i == 0)
        {
            for (int i = 0; i < o; i++)
            {
                cout << "impar[" << i << "] = " << odd[i] << endl;
            }
            for (int i = 0; i < e; i++)
            {
                cout << "par[" << i << "] = " << even[i] << endl;
            }
        }
    }
}