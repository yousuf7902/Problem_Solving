// Problem: Shootout in London
// Contest: HackerEarth - Math - Number Theory - Primality Tests
// URL: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/shootout-in-london-1/
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 

//~"~"~"~"~"~"~"~"~"~"~"~"~"~"~ ♥ B I S M I L L A H I R  R A H M A N I R  R A H I M ♥ ~"~"~"~"~"~"~"~"~"~"~"~"~"~"~//  

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
#define         sort(v) v.begin(),v.end()
#define         sortrev(v) v.rbegin(),v.rend()
#define		    py				cout << "Yes\n";
#define		    pn				cout << "No\n";
#define 	    endl            "\n"
#define         rn return 0;
//
//===============================================================================

const int max=1e5;

int arr[max];

void seive(){
	int i ,j;
	arr[0]=1;
	arr[1]=1;
	
	for(int i=4;i<max;i+=2){
			arr[i]=1;
	}
	
	for(int i=3;i<max;i+=2){
		if(arr[i]==0){
			for(int j=i*i;j<max;j+=i){
				arr[j]=1;
			}
		}
	}
	
}

int main(){
    FAST
	seive();
	
	vc<int>a;
	
	int n;
	cin>>n;
	

	int arr1[n];
	
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	
	//left
	
	for(int i=0;i<n;i++){
		if(arr1[i])
	}
	
	


    rn;
}