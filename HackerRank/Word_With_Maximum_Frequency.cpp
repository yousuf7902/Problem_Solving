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

string maximumFrequency(string s);

int main(){
    FAST
    
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    
    rn;
}

string maximumFrequency(string s){
        map <string, int> check;
       
       string s1;
       vector<string>vec;
       
       for(int i=0;i<s.size();i++){
           if(s[i]==' '){
               vec.emplace_back(s1);
               s1="";
           }
           else{
               s1=s1+s[i];
               if(i==s.size()-1){
                   vec.emplace_back(s1);
               }
           }
           
       }
      
        int maxi=0;
        for(auto it:vec){
            check[it]++;
            maxi=max(maxi,check[it]);
        }
        
    
        for(auto it:vec){
            if(check[it]==maxi){
                return it+" "+to_string(maxi);
            }
        }
}