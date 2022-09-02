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

const int space=1e7+5;

vc <int> vec(space,1);

void sieve(){
    vec[0]=0;
    vec[1]=0;
    
    for(int i=2;i*i<=space;i++){
        if(vec[i]==1){
            for(int j=i*i;j<=space;j+=i){
                vec[j]=0;
            }
        }
    }
    
}



int main(){
    FAST
    
    
    sieve();
    
    for(int i=1;i<=space;i++){
        vec[i]+=vec[i-1];
    }
    
    int t;
    cin>>t;
    
    while(t--){
        int l,r;
        cin>>l>>r;
        
        cout<<vec[r]-vec[l-1]<<endl;
    }
    
    rn;
}