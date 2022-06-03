// Problem: A. Wizard of Orz
// Contest: Codeforces - Codeforces Round #695 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1467/A
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
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n+1]={0},j=9;
        
        for(int i=1;i<=2;i++){
            arr[i]=9;
            if(i==2)arr[i]=8;
        }
        
        for(int i=3;i<=n;i++){
            arr[i]=j%10;
            j++;
        }
        
        for(int i=1;i<=n;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
    rn;
}