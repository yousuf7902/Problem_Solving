#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        long long int n,x,y,ans;
        cin >> n;

        if(n%2==0){
            x = n;
            y = 2;
        }
        else{
            x = n;
            y = 1;
        }

        ans = n / (pow(x, y));
        if(ans>0){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}