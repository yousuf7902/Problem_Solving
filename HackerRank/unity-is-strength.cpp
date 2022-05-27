#include <bits/stdc++.h>
using namespace std;

#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         sort(v) v.begin(),v.end()
#define         sortrev(v) v.rbegin(),v.rend()
#define		    py				cout << "Yes\n";
#define		    pn				cout << "No\n";
#define 	    endl            "\n"
#define         rn return 0;


int main(){
    FAST
	
	ll int n,flag=0;
	cin>>n;
	
	
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	


    rn;
}