/* #include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x, y,ans;
        cin >> x >> y;

        ans = (x * 10) + (y * 90);
        cout << ans << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    string s;
    cin >> s;
    int c = 0, d = 0, e = 0, o = 0;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'c')
        {
            c++;
        }
        if (s[i] == 'd')
        {
            d++;
        }
        if (s[i] == 'e')
        {
            e++;
        }
        if (s[i] == 'o')
        {
            o++;
        }
    }
    if (c == 0 || d == 0 || e == 0 || o == 0)
    {
        cout << 0 << endl;
    }
    else if (c == d && d == e && e == o && o == c)
    {
        cout << c << endl;
    }
    else
    {
        cout << min(min(c, d), min(e, o));
    }
    return 0;
}