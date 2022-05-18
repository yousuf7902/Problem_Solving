#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n,cnt_s=0, cnt_l=0;
        cin >> n;

        string arr[n];

        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n;i++){
            string s = arr[i];

            if(s[0]=='S'){
                cnt_s++;
            }else{
                cnt_l++;
            }
        }

        cout << cnt_s << " " << cnt_l << endl;
    }
    return 0;
}