#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0, maxNum = 0, maxi = 0,flag=0;
    cin >> n;

    int a[n + 1], b[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        maxi = max(maxi, max(a[i], b[i]));
        if(a[i]==0 && b[i]==0){
            flag = 1;
        }
    }

    for (int i = 2, j = 1; i <= n; i++, j++)
    {
        b[j + 1] = (b[j] - a[i]) + b[j + 1];
        maxNum = max(maxNum, b[j + 1]);
    }

    if (flag == 1)
    {
        cout << maxi << endl;
    }
    else
    {
        cout << maxNum << endl;
    }

    return 0;
}