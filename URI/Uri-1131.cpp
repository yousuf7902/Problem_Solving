#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inter, Gremio, num, count = 0, in_win = 0, gre_win = 0, draw = 0;
    while (1)
    {
        count++;
        cin >> inter >> Gremio;

        if (inter > Gremio)
        {
            in_win++;
        }
        else if (inter == Gremio)
        {
            draw++;
        }
        else
        {
            gre_win++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> num;
        if (num == 1)
        {
            continue;
        }
        else if (num == 2)
        {
            break;
        }
    }

    cout << count << " grenais" << endl;
    cout << "Inter:" << in_win << endl;
    cout << "Gremio:" << gre_win << endl;
    cout << "Empates:" << draw << endl;
    if (in_win > gre_win)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (in_win == gre_win)
    {
        cout << "Nao houve vencedor" << endl;
    }
    else
    {
        cout << "Gremio venceu mais" << endl;
    }
}