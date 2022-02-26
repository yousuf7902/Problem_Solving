#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, pa, pb, count;
    double ga, gb;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> pa >> pb >> ga >> gb;
        count = 0;

        while (pa <= pb)
        {
            pa = pa + ((pa * ga) / 100);
            pb = pb + ((pb * gb) / 100);
            count++;
            if (count > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (count <= 100)
        {
            cout << count << " anos." << endl;
        }
    }
}