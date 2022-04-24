#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        a = ((a * a) / 10)/10 ;
        b = ((b * b) / 20)/20;

        if(a==b){
            cout << "ANY" << endl;
        }
        else if(a>b){
            cout << "FIRST" << endl;
        }
        else if(a<b){
            cout << "SECOND" << endl;
        }
    }

    return 0;
}