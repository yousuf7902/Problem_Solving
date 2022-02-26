#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float taka, tax;
    cout << fixed << setprecision(2);
    cin >> taka;
    if (taka >= 0.00 && taka <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if (taka >= 2000.01 && taka <= 3000.00)
    {
        tax = (taka - 2000.00) * 0.08;
        cout << "R$ " << tax << endl;
    }
    else if (taka >= 3000.01 && taka <= 4500.00)
    {
        tax = (1000.00 * 0.08) + (taka - 3000.00) * 0.18;
        cout << "R$ " << tax << endl;
    }
    else if (taka >= 4500.01)
    {
        tax = (1000.00 * 0.08) + (1500.00 * 0.18) + (taka - 4500.00) * 0.28;
        cout << "R$ " << tax << endl;
    }
}