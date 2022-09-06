// Problem: A. Madoka and Strange Thoughts
// Contest: Codeforces - Codeforces Round #818 (Div. 2)
// URL: https://codeforces.com/contest/1717/problem/0
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
const int sp=1e8+10;
int arr[sp];
int even[sp];

void count(){
    int cnt=0,ev=0;
    for(int i=0;i<sp;i++){
        if(i==0)continue;
        if(i%2!=0){
            cnt++;
            arr[i]=cnt;
        }
        if(i%2==0){
            ev++;
            even[i]==ev;
        }
    }
}

int main(){
    FAST
    
    count();
    
    int t;
    cin>>t;
    
    while(t--){
        int n,ans=0;
        cin>>n;
        
        if(n==1){
            ans=1;
        }
        else{
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    if(i<=3){
                        ans+=arr[i];
                    }
                    else{
                        ans+=(arr[i]-1);
                    }
                }
                else{
                    if(i<=3){
                       ans+=2; 
                    }
                    else{
                        if(i%3==0){
                            ans+=(even[i]+1);
                        }
                        else{
                            ans+=even[i];
                        }
                    }
                }
            }
        }
        
        //cout<<ans<<endl;
    }
    cout<<(3*12)/(__gcd(3,12))<<endl;
    cout<<__gcd(3,12)<<endl;
    rn;
}