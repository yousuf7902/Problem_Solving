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
    
    string s1, s2;
    
    cin>>s1>>s2;
        
    int s1_x=0, s1_y=0,s2_x=0,s2_y=0,f=0;    
    if(s1.size()==s2.size()){
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='x')s1_x++;
            if(s1[i]=='y')s1_y++;
            if(s2[i]=='x')s2_x++;
            if(s2[i]=='y')s2_y++;
        }
    }
    else{
        f=1;
    }
    
    
    if(f==1){
        cout<<-1<<endl;
    }
    else{
        if(s1_x==s2_y && (s1_y==0 && s2_x==0) || (s1_x==0 && s2_y==0)){
            cout<<s1.size()/2<<endl;
        }
        else if((s1_y==s2_x) || (s1_x==s2_y)){
            cout<<s1.size()/2+s1_y;
        }
        else{
            cout<<-1<<endl;
        }
    }

    rn;
}