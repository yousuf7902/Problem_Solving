#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, count = 0, sum = 0;
    while (cin >> num)
    {
        if (num == 0)
        {
            break;
        }
        for (int i = num;; i++)
        {

            if (i % 2 == 0)
            {
                count++;
                sum = sum + i;
            }
            if (count == 5)
            {
                cout << sum << endl;
                count = 0;
                sum = 0;
                break;
            }
        }
    }
}