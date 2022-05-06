#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /* int arr[4];
    set<int> st;
    for (int i = 0; i < 4;i++){
        cin >> arr[i];
        st.emplace(arr[i]);
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size - st.size() << endl; */

    //Another way

    int arr[4],count=0;
    for (int i = 0; i < 4;i++){
        cin >> arr[i];
    }

    sort(arr, arr + 4);
    for (int i = 0; i < 3;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }   
    }
    cout << count << endl;
    return 0;
}