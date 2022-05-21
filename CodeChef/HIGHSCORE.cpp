#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,maxNum=INT_MIN;
        cin >> n;
        int arr[4];

        for (int i = 0; i < 4;i++){
            cin >> arr[i];
            maxNum = max(maxNum, arr[i]);
        }

        cout << maxNum << endl;
    }
    return 0;
}