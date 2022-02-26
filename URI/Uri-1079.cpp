#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, N;
    cin >> N;
    float a, b, c, avg;
    for (i = 1; i <= N; i++)
    {
        cin >> a >> b >> c;
        avg = (a * 2 + b * 3 + c * 5) / (2.0 + 3.0 + 5.0);
        cout << fixed << setprecision(1) << avg << endl;
    }
}