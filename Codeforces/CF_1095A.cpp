#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 1;
    for (int i = 0; i < s.size()-1; i++)
    {
        while(count>0){
            s[i] = ' ';
            count--;
        }
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    cout << s << endl;
    return 0;
}