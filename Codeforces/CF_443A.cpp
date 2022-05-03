#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /* set<char> s;

    for (int i = 0;;i++){
        char c;
        cin >> c;
        s.insert(c);
        if(c=='}'){
            break;
        }
    }

    if(s.size()>3) cout << s.size()-3 << endl;
    else
        cout << s.size() - 2 << endl; */

    //Another way

    string s1, s2=" ";
    getline(cin, s1);

    for (int i = 0; i < s1.size();i++){
        if(s1[i]!='{' && s1[i]!='}' && s1[i]!=' ' &&s1[i]!=','){
            s2=s2+s1[i];
        }
    }
    sort(s2.begin(), s2.end());
    int count = 0;
    for (int i = 0; i < s2.size() - 1;i++){
        if(s2[i]!=s2[i+1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}