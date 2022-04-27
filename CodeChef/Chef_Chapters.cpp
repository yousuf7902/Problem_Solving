#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x, y, z,ans;
        cin >> x >> y >> z;

        ans = x * (y * z);
        cout << ans << endl;
    }

    return 0;
}