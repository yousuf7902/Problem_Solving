#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, fib[46];
    cin >> N;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            cout << fib[N - 1];
        }
        else
        {
            cout << fib[i] << " ";
        }
    }
    cout << endl;
}