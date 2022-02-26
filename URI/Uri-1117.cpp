#include <bits/stdc++.h>
using namespace std;

int main()
{
    float score, media, sum = 0;
    int count = 0;
    while (1)
    {
        cin >> score;
        if (score < 0 || score > 10)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            if (score > 0 || score < 10)
            {
                count++;
                sum = sum + score;
            }
            if (count == 2)
            {
                media = sum / 2;
                cout << fixed << setprecision(2);
                cout << "media = " << media << endl;
                break;
            }
        }
    }
}