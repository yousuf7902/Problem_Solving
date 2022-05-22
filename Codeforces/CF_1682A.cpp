#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n,count=0;
        cin >> n;
        string s;
        cin >> s;

        if(n%2!=0){
            cout << 1 << endl;
        }
        else{
            if(n==2){
                cout << n << endl;
            }
            else{
                if(n%4==0){
                    cout << 4 << endl;
                }
                else{
                    cout << 2 << endl;
                }
            }
        }

    }
    return 0;
}