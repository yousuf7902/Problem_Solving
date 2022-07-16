// Problem: Database
// Contest: Virtual Judge - SPOJ
// URL: https://vjudge.net/problem/SPOJ-RPLD
// Memory Limit: 1536 MB
// Time Limit: 1000 ms

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
        
    int t,cnt=1;
    cin>>t;
    
    while(t--){
        int n,m,flag=0;
        cin>>n>>m;
        
        map <pair,bool>check;
        
        while(m--){
            int a,b;
            cin>>a>>b;
            
            if(check[{a,b}]!=0)flag=1;
            check[{a,b}]=1;
        }
            
        if(flag==0){
            cout<<"Scenario #"<<cnt<<": possible"<<endl;
        }
        else{
           cout<<"Scenario #"<<cnt<<": impossible"<<endl;
        }
         
        ++cnt;
        
    }
        
    rn;
}