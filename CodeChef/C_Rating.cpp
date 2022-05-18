#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x, y,cnt=0;
        cin >> x >> y;

        while(x<y){
            cnt++;
            x += 8;
        }
        cout << cnt << endl;
    }

    return 0;
}