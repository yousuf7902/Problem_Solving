/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;

    for (int i = 0; i < p.size(); i++)
    {

        if (p[i] == 'H' || p[i] == 'Q')
        {
            cout << "YES";
            return 0;
        }
    }
    for (int i = 0; i < p.size(); i++)
    {
        if ((int)p[i] == 57 )
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
} */

// Another way;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;

    for (int i = 0; i < p.size(); i++)
    {
        if(p[i]=='H'||p[i]=='Q'||(int)p[i]==57){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}