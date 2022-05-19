#include <bits/stdc++.h>
using namespace std;
const int mx = 1e7;

int arr[mx] = {0};
vector<int> vec;
void seive()
{
    arr[0] = 1;
    arr[1] = 1;
    int i, j;
    for (i = 4; i < mx; i += 2)
    {
        arr[i] = 1;
    }

    for (i = 3; i < mx; i += 2)
    {
        if (arr[i] == 0)
        {
            for (j = i + i; j < mx; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    seive();

    for (int i = 0; i < mx; i++)
    {
        if (arr[i] == 0)
        {
            vec.emplace_back(i);
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << vec[n - 1] << endl;
    }
    return 0;
}