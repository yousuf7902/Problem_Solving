#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /* int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> ch;

    for (int i = 0; i < n;i++){

        if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z'){
            ch.emplace(tolower(s[i]));
        }
    }
    if(ch.size()==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    } */

    //Another way

    int n,count=0;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n;i++){
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < n;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }

    if(count==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
        return 0;
}