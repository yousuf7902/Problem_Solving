#include <iostream>

using namespace std;

int main()
{
    int limit, i;
    cin >> limit;
    for (i = 1; i <= limit; i++)
    {
        cout << i << " " << i * i << " " << i * i * i << endl;
    }
}