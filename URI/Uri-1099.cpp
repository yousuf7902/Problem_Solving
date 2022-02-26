#include <iostream>

using namespace std;

int main()
{
    int n, x, y, big, small;
    cin >> n;
    while (n--)
    {
        int sum = 0;
        cin >> x >> y;
        big = max(x, y);
        small = min(x, y);
        for (int i = small + 1; i < big; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
}