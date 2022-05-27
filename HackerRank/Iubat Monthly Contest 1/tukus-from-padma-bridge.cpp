
#include <bits/stdc++.h>
using namespace std;

#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         sortrev(v) v.rbegin(),v.rend()
#define		    py				cout << "Yes\n";
#define		    pn				cout << "No\n";
#define 	    endl            "\n"
#define         rn return 0;


int main(){
    FAST
	
	int arr[3],sum=0;
	
	for(int i=0;i<3;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	
	sort(arr, arr+3);
	
	if(arr[0]+arr[1]>=arr[2] && sum==180 && arr[0]!=0 && arr[2]!=180 ){
		cout<<"Tukus"<<endl;
	}
	
	else{
		cout<<"Meo"<<endl;
	}


    rn;
}