// Problem: A - A
// Contest: Virtual Judge - Solo Speed Contest - 49
// URL: https://vjudge.net/contest/506718#problem/A
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

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
    
    string s;
    cin>>s;
    
    int f=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            if((i+1)%2==0){
                f=1;
                break;
            }
        }
        else if(s[i]=='L'){
            if((i+1)%2!=0){
                f=1;
                break;
            }
        }
    }
    
    if(f==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    
    rn;
}