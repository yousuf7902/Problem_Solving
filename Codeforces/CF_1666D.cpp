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

        vector<char> vec;
        for (int i = 0; i < s.size();i++){
            if(s[i]!=s[i+1]){
                vec.emplace_back(s[i]);
            }
        }

        for (int i = 0; i < t.size();i++){
            for (int j = 0; j < vec.size();j++){
                if(t[i]==vec[i]){
                    vec[i] = ' ';
                    i++;
                }
            }
        }
    }
    return 0;
}