#include <iostream>

using namespace std;

void show(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "I love Recursion" << endl;
    --n;
    show(n);
}

int main()
{
    int n;
    cin >> n;

    show(n);

    return 0;
}