#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, al = 0, gas = 0, dis = 0;
    while (1)
    {
        cin >> num;
        if (num == 1)
        {
            al++;
        }
        else if (num == 2)
        {
            gas++;
        }
        else if (num == 3)
        {
            dis++;
        }
        else if (num == 4)
        {
            break;
        }
        else if (num > 4)
        {
            continue;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;
}