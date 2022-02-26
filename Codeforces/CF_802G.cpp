#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, check = "heidi";
    cin >> s;

    for (int i = 0,j=0; i < s.size(); i++)
    {
        if (check[j] == s[i])
        {
            j++;
            if (j == 5)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}