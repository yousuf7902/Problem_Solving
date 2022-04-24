#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x,flat=100;
        float perc = 0.1;
        cin >> x;

        int a = x-(x * perc);
        int b = x - flat;

        if(min(a, b)==a){
            cout << x * perc << endl;
        }
        else{
            cout << flat << endl;
        }

    }
    return 0;
}