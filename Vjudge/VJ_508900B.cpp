// Problem: B - Array Condensation
// Contest: Virtual Judge - IUBAT ICPC 2021 Team Selection Contest II
// URL: https://vjudge.net/contest/508900#problem/B
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

int main(){
    FAST
    ll int n, m,k;
    cin>>n>>m>>k;
    
    
    ll int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);

    for(int i=1;i<=k;i++){
        int cnt=0,sum=0;
        for(int j=n-1;;j--){
            if(cnt==m)break;
            cnt++;
            if(arr[j]!=0){
                sum=sum+arr[j];
                arr[j]=0;
            }
            else{
                cnt--;
            }
            
        }
        arr[n-1]=sum;
    }
       
    cout<<arr[n-1]<<endl;
    
    rn;
}