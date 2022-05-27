#include <bits/stdc++.h>
using namespace std;

#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         sort(v) sort(v.begin(),v.end())
#define         sortrev(v) sort(v.rbegin(),v.rend())
#define		    py				cout << "Yes\n";
#define		    pn				cout << "No\n";
#define 	    endl            "\n"
#define         rn return 0;

const int lx=1e7;

int mark[lx];
int pos[lx];
vc<int>vec;

int main(){
    FAST
	
	int n,m;
	
	cin>>n>>m;
	
	int a1[n],a2[m];
	
	for(int i=0;i<n;i++){
		cin>>a1[i];
		mark[a1[i]]++;
		pos[a1[i]]=a1[i];
	}
	
	for(int i=0;i<m;i++){
		cin>>a2[i];
	}
	
	for(int i=0;i<m;i++){
		if(mark[a2[i]]==0){
			if(mark[pos[a2[i]]-1]==0 && mark[pos[a2[i]]+1]==0){
				cout<<-1<<endl;
			}
			else{
				if(pos[a2[i-1]]<pos[a2[i+1]]){
						vec.eb(pos[a2[i-1]]);
						pos[a2[i-1]]=0;
						mark[a2[i-1]]=0;
					}
				else{
						vec.eb(pos[a2[i+1]]);
						pos[a2[i+1]]=0;
						mark[a2[i+1]]=0;
					}
		
			}
		}
		else{
			vec.eb(a2[i]);
		}
	}
	
	for(int i=vec.size()-1;i>=0;i--){
			if(vec[i]==0){
				cout<<-1<<endl;
			}
			else{
				cout<<vec[i]<<endl;
			}
	}

    rn;
}