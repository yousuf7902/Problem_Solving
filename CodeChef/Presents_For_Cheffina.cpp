#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, count;
        cin >> n;
        count = n - (n / 5);
        cout << count << endl;
    }

    return 0;
}