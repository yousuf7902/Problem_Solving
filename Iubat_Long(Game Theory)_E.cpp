// Problem: E - Misere Nim
// Contest: Virtual Judge - IUBAT Long I (Game Theory + STL)
// URL: https://vjudge.net/contest/502739#problem/E
// Memory Limit: 64 MB
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
        int n;
        cin>>n;
        
        int arr[n+1],check=0;
        
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]==1)check++; 
        }
        

        if(check==n){
            if(n%2==0){
                cout<<"Case "<<cnt<<": Alice"<<endl;

            }
            else{
                cout<<"Case "<<cnt<<": Bob"<<endl;
    
            } 
        }
        else{
            int ans=0;
    
            for(int i=1;i<=n;i++){
                ans=ans^arr[i];
            }
        
            if(ans==0){
                cout<<"Case "<<cnt<<": Bob"<<endl;
            }
            else{
                cout<<"Case "<<cnt<<": Alice"<<endl;
            }
        }
        
        cnt++;
    }    

    rn;
}