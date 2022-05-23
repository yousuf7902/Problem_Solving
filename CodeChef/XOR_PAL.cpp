#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0,j=n-1;i<=j;i++,j--){
            if(s[i]!=s[j]){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}