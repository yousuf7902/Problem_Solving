// Problem: A - Banner Display
// Contest: Virtual Judge - IUBAT ICPC 2021 Team Selection Contest II
// URL: https://vjudge.net/contest/508900#problem/A
// Memory Limit: 256 MB
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
//#define         st set<int>
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
    string s;
    cin>>s;
    
    set<char>st;
    map<char, int> mapi;
    for(int i=0;i<s.size();i++){
        if(s[i]=='c' || s[i]=='o' || s[i]=='d' ||s[i]=='e' || s[i]=='r' || s[i]=='a' || s[i]=='m' || s[i]=='s'){
            mapi[s[i]]++;
            st.insert(s[i]);
        }
    }
    
    int ans=INT_MAX;
    for(int i=0;i<s.size();i++){
            if(mapi[s[i]]!=0){
                ans=min(ans,mapi[s[i]]);  
            }   
    }
    
    if(st.size()==8){
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
    rn;
}