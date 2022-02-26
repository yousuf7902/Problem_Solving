#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int count = 0;
    float num[6], avg, sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> num[i];
        if (num[i] >= 0)
        {
            count++;
            sum = sum + num[i];
        }
    }
    avg = sum / count;
    cout << count << " valores positivos" << endl;
    cout << fixed;
    cout << setprecision(1) << avg << endl;
}