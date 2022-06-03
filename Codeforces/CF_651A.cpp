// Problem: A. Joysticks
// Contest: Codeforces - Codeforces Round #345 (Div. 2)
// URL: https://codeforces.com/contest/651/problem/A
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
    int a,b,mark=1;
    cin>>a>>b;
    
    if(a>=b){
        a-=2;
        b++;
    }
    else{
        b-=2;
        a++;
    }
    
    if(a<0 || b<0)
    {
        mark=0;
    }
    
    while(a>0 && b>0){
        
        mark++;
        if(a>=b){
            a-=2;
            b++;
        }
        else{
            b-=2;
            a++;
        }
        
    }
    cout<<mark<<endl;
    rn;
}