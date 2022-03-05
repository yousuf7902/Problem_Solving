#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;

    for (int i = 0; i < s.size();i++){
        if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
            s[i] = '.';
        }
    }
    for (int i = 0; i < s.size();i++){
        cout << s[i] << " ";
    }
        return 0;
}