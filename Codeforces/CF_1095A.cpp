#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0,num=1;
    cin >> n;

    string s,s1=" ";
    cin >> s;

    for (int i = 0; i < s.size()-1;i++){
        count++;
        if(s[i]!=s[i+1]){
            if(count==num){
                s1 = s1 + s[i];
                cout << "hell";
            }
            else{
                int pos = i;
                for (int i = pos; i<count-num;i++){
                    s1 = s1 + s[i];
                }
            }
            num++;
        }
        count = 0;
    }

    cout << s1 << endl;
    return 0;
}