#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,flag=0;
    cin >> n;

    char arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n;i++){

        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}