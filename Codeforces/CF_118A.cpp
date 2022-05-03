#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* string s,s1="";
    cin >> s;

    vector<char> st;
    for (int i = 0; i < s.size();i++){
        if(tolower(s[i])!='a'&& tolower(s[i])!='e'&& tolower(s[i])!='i'&&tolower(s[i])!='o'&&tolower(s[i])!='u'){
            s1 = s1 + s[i];
        }
    }

    for (int i = 0; i < s1.size();i++){
        if(s1[i]!=' '){
            st.emplace_back(tolower(s1[i]));
        }
    }

    for(auto it:st){
        cout <<"."<<it;
    } */

    // Another way

    string s1, s2 = " ";
    cin >> s1;

    for (int i = 0; i < s1.size(); i++)
    {
        if (tolower(s1[i]) == 'a' || tolower(s1[i]) == 'e' || tolower(s1[i]) == 'i' || tolower(s1[i]) == 'o' || tolower(s1[i]) == 'u')
        {
            s1[i] = ' ';
        }
    }

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != ' ')
        {
            cout << "." << (char)tolower(s1[i]);
        }
    }
    return 0;
}