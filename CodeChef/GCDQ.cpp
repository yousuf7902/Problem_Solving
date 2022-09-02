// Problem: Gcd Queries
// Contest: CodeChef - JAN15
// URL: https://www.codechef.com/problems/GCDQ
// Memory Limit: 256 MB
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


int gcd(int a, int b){
    if(b==0)return a;
    
    return gcd(b, a%b);
}


int main(){
    FAST
    int t;
    cin>>t;
    
    while(t--){
        int n,q;
        cin>>n>>q;
        
        int arr[n+1];
        
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        
        int front[n+7]={0};
        
        for(int i=1;i<=n;i++){
            if(i==1)front[i]=arr[i];
            else{
                front[i]=gcd(front[i-1],arr[i]);
            }
        }
        
        int back[n+7]={0};
        
        for(int i=n;i>=1;i--){
            if(i==n)back[i]=arr[i];
            else{
                back[i]=gcd(back[i+1],arr[i]);
            }
        }
        
        while(q--){
            int l,r;
            cin>>l>>r;
            
            cout<<gcd(front[l-1], back[r+1])<<endl;
        }
        
         
    }
    rn;
}