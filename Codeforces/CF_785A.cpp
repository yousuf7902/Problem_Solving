#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, ans = 0;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s=="Tetrahedron"){
            ans = ans + 4;
        }
        else if(s=="Cube"){
            ans = ans + 6;
        }
        else if(s=="Octahedron"){
            ans = ans + 8;
        }
        else if(s=="Dodecahedron"){
            ans = ans + 12;
        }
        else if(s=="Icosahedron"){
            ans = ans + 20;
        }
    }
    cout << ans << endl;
    return 0;
}