#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value;
    cin >> n;

    while (n)
    {
        int c = 0;
        cin >> value;
        for (int i = 2; i < value; i++)
        {
            if (value % i == 0)
            {
                c++;
                cout << value << " nao eh primo" << endl;
                break;
            }
        }
        if (c == 0)
        {
            cout << value << " eh primo" << endl;
        }
        n--;
    }
}