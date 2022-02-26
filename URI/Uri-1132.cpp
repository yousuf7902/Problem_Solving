#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X, Y, temp;
    int sum = 0;
    cin >> X >> Y;
    if (X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }
    for (int i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }
    cout << sum << endl;
}