#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, count = 0, sum = 0;
    float avg;
    while (cin >> num)
    {
        if (num > 0)
        {
            count++;
            sum = sum + num;
        }
        if (num < 0)
        {
            avg = (float)sum / count;
            cout << fixed << setprecision(2) << avg << endl;
            break;
        }
    }
}