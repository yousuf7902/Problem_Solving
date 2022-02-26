#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int s_t, e_t, g_time;
    cin >> s_t >> e_t;
    if (s_t > 12)
    {
        g_time = (24 - s_t) + e_t;
        cout << "O JOGO DUROU " << g_time << " HORA(S)" << endl;
    }
    else if (s_t == 12 && e_t == 12)
    {
        g_time = 12;
        cout << "O JOGO DUROU " << g_time << " HORA(S)" << endl;
    }
    else if (s_t == 0 && e_t == 0)
    {
        g_time = 24;
        cout << "O JOGO DUROU " << g_time << " HORA(S)" << endl;
    }
    else
    {
        g_time = (12 - s_t) + (e_t - 12);
        cout << "O JOGO DUROU " << g_time << " HORA(S)" << endl;
    }
}