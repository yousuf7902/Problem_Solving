#include <iostream>

using namespace std;

int main()
{
    int num[3], temp, i, j, a, b, c;
    for (i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    a = num[0];
    b = num[1];
    c = num[2];
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (num[j] < num[i])
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << num[i] << endl;
    }
    cout << endl;
    cout << a << endl
         << b << endl
         << c << endl;
}
