#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    while(n--){
        string s, t;
        cin >> s >> t;
        int flag = 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());


        for (int i = 0; i < t.size();i++){
            for (int j = 0; j < s.size();j++){
                if(t[i]==s[j]){
                    flag++;
                    s[j] = ' ';
                    break;
                }
            }
        }
        cout << flag << endl;

    }
    return 0;
}