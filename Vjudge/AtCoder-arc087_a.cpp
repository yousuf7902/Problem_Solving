// Problem: Good Sequence
// Contest: Virtual Judge - AtCoder
// URL: https://vjudge.net/problem/AtCoder-arc087_a
// Memory Limit: 256 MB
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

    int n;
    cin>>n;
    
    vc<int>vec;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        vec.eb(x);
    }
    
    map<int, int> numbers;
    
    for(auto it:vec){
        numbers[it]++;
    }
    
    int ans=0;
    for(auto it: numbers){
        if(it.second==it.first)continue;
        else if(it.second<it.first){
            ans=ans+it.second;
        }
        else if(it.second>it.first){
            ans=ans+(it.second-it.first);
        }
    }
    
    cout<<ans<<endl;

    rn;
}