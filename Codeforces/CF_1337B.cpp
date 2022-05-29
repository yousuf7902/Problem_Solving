// Problem: B. Kana and Dragon Quest game
// Contest: Codeforces - Codeforces Round #635 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1337/B
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
#define         py      cout << "YES\n";
#define         pn      cout << "NO\n";
#define			endl     "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST
    int t;
    cin>>t;
    
    /*while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        
        while(n--){
            if(x<=20)break;
            x=(x/2)+10;
        }
        
        while(m--){
            x=x-10;
            if(x<=0)break;
        }
        if(x<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }*/
    
    //Another way
    
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        
        m=m*10;
        if(x<=m)py
        else{
            while(n--){
                x=(x/2)+10;
            }
            x=x-m;
            if(x<=0)py
            else pn
        }
    }
    
    rn;
}