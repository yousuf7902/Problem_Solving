#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        bool flag = false;
        string s;
        cin >> s;

        for (int i = 0, j=n-1; i < n/2, j>=n/2;i++,j--){
                if(s[i]==s[j]){
                    flag = true;
                    break;
                }
        }

        if(flag==true){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}