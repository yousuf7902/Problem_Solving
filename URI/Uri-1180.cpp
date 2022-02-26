#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos = 0, min = 0, i;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            min = arr[i];
            pos = i;
        }
        else
        {
            if (min > arr[i])
            {
                min = arr[i];
                pos = i;
            }
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;
}