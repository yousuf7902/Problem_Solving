#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n + 1], max_height = INT_MIN, min_height = INT_MAX, count = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        max_height = max(max_height, arr[i]);
        min_height = min(min_height, arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == max_height && arr[1]!=max_height)
        {
            count++;
            swap(arr[1], arr[i]);
        }
        else if (arr[i] == min_height && arr[n]!=min_height)
        {
            count++;
            swap(arr[n], arr[i]);
        }
    }
    if (n % 2 == 0)
    {
        cout << count << endl;
    }
    else
    {
        if (count == 0)
        {
            cout << count << endl;
        }
        else
        {
            cout << (n - 2) * count << endl;
        }
    }

    return 0;
}