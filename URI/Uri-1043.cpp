#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, peri, area;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        peri = a + b + c;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << peri << endl;
    }
    else
    {
        area = (a + b) / 2.0 * c;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
}