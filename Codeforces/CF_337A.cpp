#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, temp, minNum = INT_MAX, sub;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (arr[i] != arr[j])
            {
                sub = arr[i] - arr[j];
                minNum = min(minNum, sub);
            }
        }
    }
    cout << minNum << endl;

    return 0;
}