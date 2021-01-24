/*
Platform :- Hackerearth
Problem :- The GCD function 
Hint :- Greedy find GCD
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	 
	while(t--){
		int n;
		cin>>n;

        unsigned long long  x=1;
		int mx=n*(n+1);
		mx/=2;
        map<int,int>P;
		for(int i=1;i<=n;++i){
			int f=0;
			if((x%i)==0){
				continue;
			}
			unsigned long long temp=x*i;
			unsigned long long z2=i;
			long long z3=(__gcd(x,z2));
			temp/=z3;
            x=temp; 
			 
		}
		  
		cout<<mx<<' '<<x<<endl;
	}
}
