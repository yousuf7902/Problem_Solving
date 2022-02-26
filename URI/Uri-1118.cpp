#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x, avg = 0;
    int count1 = 0, press, i;
    while (1)
    {
        cin >> x;
        if (x >= 0 && x <= 10)
        {
            count1++;
            avg = (avg + x);
            if (count1 == 2)
            {
                avg = avg / 2;
                cout << fixed << setprecision(2);
                cout << "media = " << avg << endl;
                cout << "novo calculo (1-sim 2-nao)" << endl;

                for (i = 0;; i++)
                {
                    cin >> press;
                    if (press < 1 || press > 2)
                    {
                        cout << "novo calculo (1-sim 2-nao)" << endl;
                    }
                    else if (press == 1)
                    {
                        avg = 0;
                        count1 = 0;
                        break;
                    }
                    else if (press == 2)
                    {
                        return 0;
                    }
                }
            }
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    return 0;
}