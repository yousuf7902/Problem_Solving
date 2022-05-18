#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int x, y,a=500,b=1000,ans=0;
        cin >> x >> y;

        ans = max((a - (x * 2)) + (b - ((y + x) * 4)), (b - (y * 4)) + (a - ((y + x) * 2)));
        cout << ans << endl;
    }
    return 0;
}