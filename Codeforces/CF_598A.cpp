// Problem: A. Tricky Sum
// Contest: Codeforces - Educational Codeforces Round 1
// URL: https://codeforces.com/problemset/problem/598/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 


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

int main(){
    FAST
    ll int t;
    cin>>t;
    
    while(t--){
        ll int n,sum,x=0;
        cin>>n;
        
 
        sum=(n*(n+1))/2;
    
        for(ll int i=1;x<=n;i++){
            x=pow(2,i);
            sum=sum-x;          
            
        }
        cout<<sum<<endl;
 
        
    }
    rn;
}