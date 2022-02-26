#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value, rabbit = 0, rat = 0, frog = 0, total;
    char name;
    cin >> n;
    while (n--)
    {
        cin >> value >> name;

        if (name == 'C')
        {
            rabbit = rabbit + value;
        }
        else if (name == 'R')
        {
            rat = rat + value;
        }
        else if (name == 'S')
        {
            frog = frog + value;
        }
    }
    total = rabbit + rat + frog;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << rabbit / (float)total * 100 << " %" << endl;
    cout << "Percentual de ratos: " << rat / (float)total * 100 << " %" << endl;
    cout << "Percentual de sapos: " << frog / (float)total * 100 << " %" << endl;
}