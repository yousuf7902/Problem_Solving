#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a,check;
    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        check = check+ a[i];
        cout << check << endl;
        if(check=="."){
            a[i] = '0';
            check = " ";
        }
        else if(check=="-."){
            a[i] ='1';
            check = " ";
        }
        else if(check=="--"){
            a[i] ='2';
            check = " ";
        }
    }
    cout << a << endl;
    return 0;
}