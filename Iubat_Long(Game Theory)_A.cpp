// Problem: A - A Multiplication Game
// Contest: Virtual Judge - IUBAT Long I (Game Theory + STL)
// URL: https://vjudge.net/contest/502739#problem/A
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

int main(){
    FAST
    
    ll int n;
    
    while(cin>>n){
        ll int p=1,stan=0,ollie=0;
        
        while(1){
        p=p*9;
        
        if(p>=n){
            stan=1;
            break;
        }
        
        p=p*2;
        if(p>=n){
            ollie=1;
            break;
        }

    }
    
        if(ollie==1){
            cout<<"Ollie wins."<<endl;
        }
        else{
            cout<<"Stan wins."<<endl;
        }    
        
    }
    
    rn;
}