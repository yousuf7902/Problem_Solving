#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    /* int n, m;
    cin >> n >> m;
 
    int arr[m],minNum=INT_MAX,diff;

    for (int i = 0; i < m;i++){
        cin >> arr[i];
    }
    sort(arr, arr + m);
    minNum = arr[n-1] - arr[0];
    for (int i = n; i <= m;i++){
        diff = abs(arr[i - 1] - arr[i - n]);
        minNum = min(minNum, diff);
    }
    cout << minNum << endl; */

    int n, m;
    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m;i++){
        cin >> arr[i];
    }

    sort(arr, arr + m);
    int ans = INT_MAX;
    for (int i = 0; i <= m - n;i++){
        ans = min(ans, arr[i + n - 1] - arr[i]);
    }

    cout << abs(ans) << endl;
    return 0;
}