#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m,sum=0;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    for (int i = 0; i < m;i++){
        if(arr[i]<=0){
            sum = sum + arr[i];
        }
        
    }

    cout << abs(sum) << endl;
    return 0;
}