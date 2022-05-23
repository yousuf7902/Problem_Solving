#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }

        if(n==1){
            cout << 0 << endl;
        }
        else{
            for (int i = n - 1; i >= 0;i--){
                if(arr[i]!=0){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}