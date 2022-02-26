#include <iostream>

using namespace std;

int main()
{
    int N, X, f = 0, c = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> X;
        if (X >= 10 && X <= 20)
        {
            c++;
        }
        else
        {
            f++;
        }
    }
    cout << c << " in" << endl;
    cout << f << " out" << endl;
}