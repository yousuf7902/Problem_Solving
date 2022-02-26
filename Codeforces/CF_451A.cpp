#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m,count=0;
    cin >> n>>m;
    int sum;
    if(n==1||m==1){
        sum = n * m;
    }
    else{
        sum = n + m;
    }
    while(sum>0){
        count++;
        if(sum==1){
            sum = sum - 1;
        }
        else{
            sum = sum - 2;
        }
    }
    if(count%2==0){
        cout << "Malvika" << endl;
    }
    else{
        cout << "Akshat" << endl;
    }
    return 0;
}