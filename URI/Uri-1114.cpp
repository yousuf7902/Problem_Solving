#include <iostream>

using namespace std;

int main()
{
    int number;
    while (1)
    {
        cin >> number;
        if (number == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
        {
            cout << "Senha Invalida" << endl;
        }
    }
}