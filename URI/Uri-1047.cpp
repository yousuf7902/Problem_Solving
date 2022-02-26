#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2, diff;
    cin >> h1 >> m1 >> h2 >> m2;
    diff = ((h2 * 60) + m2) - ((h1 * 60) + m1);
    if (diff <= 0)
    {
        diff = diff + (24 * 60);
    }
    cout << "O JOGO DUROU " << diff / 60 << " HORA(S) E " << diff % 60 << " MINUTO(S)" << endl;
}
