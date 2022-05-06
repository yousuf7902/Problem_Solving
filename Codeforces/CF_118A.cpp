#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            st.emplace_back(s[i]);
        }
    }

    for (auto it : st)
    {
        cout <<"."<<it;
    }

    // Another way

    /* string s1;
    cin >> s1;

    for (int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
        if (s1[i] == 'a' || s1[i] == 'e' ||s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'  && s[i]=='y')
        {
            continue;
        }
        else{
            cout << "." << s1[i];
        }
    } */
    return 0;
}