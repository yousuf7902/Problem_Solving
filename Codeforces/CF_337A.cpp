#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m,minNum=0,sub;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            sub = arr[i] - arr[j];
            if(sub>0){
                minNum = min(minNum, sub);
            }
        }
    }
    cout << minNum<< endl;
    
    return 0;
}