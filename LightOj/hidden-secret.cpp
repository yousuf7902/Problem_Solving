// Problem: Hidden Secret!
// Contest: LightOJ
// URL: https://lightoj.com/problem/hidden-secret
// Memory Limit: 64 MB
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
    int t,i=1;
    cin>>t;
    
    cin.ignore();
    while(t--){
        string s1,s2;
        
        getline(cin,s1);

        getline(cin,s2);
        
        
        vc <char> f1,f2;

        for(int i=0;i<s1.size();i++){
            if(s1[i]!=' ')f1.eb(tolower(s1[i]));
        }
        
        for(int i=0;i<s2.size();i++){
            if(s2[i]!=' ')f2.eb(tolower(s2[i]));

        }
        
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        
        if(f1==f2){
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"No"<<endl;
        }
        i++;
    }
    rn;
}