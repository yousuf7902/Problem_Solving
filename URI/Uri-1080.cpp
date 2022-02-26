#include <iostream>

using namespace std;

int main()
{
    int num, highest = 0, position = 0;
    for (int i = 1; i <= 100; i++)
    {
        cin >> num;
        if (highest < num)
        {
            highest = num;
            position = i;
        }
    }
    cout << highest << endl;
    cout << position << endl;
}