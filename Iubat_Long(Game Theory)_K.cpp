// Problem: K - CD
// Contest: Virtual Judge - IUBAT Long I (Game Theory + STL)
// URL: https://vjudge.net/contest/502739#problem/K
// Memory Limit: 1024 MB
// Time Limit: 3000 ms

//~"~"~"~"~"~"~"~"~"~"~"~"~  ♥ B I S M I L L A H I R  R A H M A N I R  R A H I M ♥   ~"~"~"~"~"~"~"~"~"~"~"~"~//  

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Yousuf Hassan || CSE,IUBAT || yousufhassan04@gmail.com         ## //
// ##                                                                         ## //
// ##                        CF Handle : Yousuf7902                           ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //

#include <bits/stdc++.h>
using namespace std;

//===============================================================================
//
#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         prec(n) fixed<<setprecision(n)
#define         py      cout << "Yes\n";
#define         pn      cout << "No\n";
#define			endl     "\n"
#define         rn return 0;
//
//===============================================================================
const int space=1e7;

int arr[space]={0};

int main(){
    FAST
    
    int n,m;
    while(cin>>n , cin>>m){
        
        if(n==0 && m==0)break;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[x]++;
        }
        
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            arr[x]++;
        }
        
        int sell=0;
        
        for(int i=0;i<space;i++){
            if(arr[i]==2){
                sell++;
            }
            else if(arr[i]>2){
                sell=sell+(arr[i]-1);
            }
        }
        cout<<sell<<endl; 
        
        for(int i=0;i<space;i++){
            arr[i]=0;
        }   
    }
    rn;
}