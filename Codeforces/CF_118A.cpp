#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            s[i] = s[i-1];
            s[i - 1] =' ';
        }
    }
    for (int i = 0; i < s.size();i++){
        if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'||s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'){
            s[i] = '.';
        }
    }
    cout << s;
    return 0;
}