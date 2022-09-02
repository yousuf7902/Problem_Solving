#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define max 32000
using ll=long long;

vector<int>vec;

void sieve(){
    bool isPrime[max];
    
    for(int i=0;i<max;++i){
        isPrime[i]=true;
    }
    
    for(int i=3;i*i<=max;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<=max;j+=i){
                isPrime[j]=false;
            }
        }
    }
    
    vec.push_back(2);
    for(int i=3;i<max;i+=2){
        if(isPrime[i]){
            vec.push_back(i);
        }
    }
}

void segSieve(ll l, ll r){
    bool isPrime[r-l+1];
    
    for(int i=0;i<r-l+1;i++)isPrime[i]=true;
    
    if(l==1)isPrime[0]=false;
    
    for(int i=0;vec[i]*vec[i]<=r;i++){
        int c_prime=vec[i];
        ll base=(l/c_prime)*c_prime;
        
        if(base<l)base+=c_prime;
        
        for(ll j=base;j<=r;j+=c_prime){
            isPrime[j-l]=false;
        }
        
        if(base==c_prime) isPrime[base-l]=true;
        
        }
        
        for(int i=0;i<r-l+1;i++){
            if(isPrime[i]){
                cout<<(i+l)<<endl;
            }
        }
        puts("");
}


int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    sieve();
    
    int t;
    cin>>t;
    
    while(t--){
        ll l, r;
        cin>>l>>r;
        
        segSieve(l,r);
    }
    
    return 0;
}