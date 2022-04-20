#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, l, c, d, p, nl, np,count=0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l;
    while (drink != 0 && c!=0 && p!=0){
        drink = drink / nl;
        c = c / d;
        p = p / np;
        count++;
    }
    cout << count << endl;
    return 0;
}