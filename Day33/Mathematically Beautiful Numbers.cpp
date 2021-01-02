/*
Platform :- Hackerearth 
Problem  :- Mathematically Beautiful Numbers
Approach :- if number x is greater than 1 and ( x % k >1 ) then it is never possible to get x from sum of different powers of x
            we will run a while loop and divide it by k until it (x) becomes <=1 or we found ( x % k >1 ) 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x;
		int k;
		cin>>x>>k;

		int f=0;
		while(x>1){
			int d=x%k;
			if(d>1){
				f=1;
				break;
			}
			x/=k;
		}
		if(f==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
