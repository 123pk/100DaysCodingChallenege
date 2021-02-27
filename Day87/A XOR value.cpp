/*
Platform :- Hackerearth
contest :- Hackerearth February Circuit 
Problem :- A XOR value


SOLUTION WILL BE ADDED ONCE CONTEST IS OVER
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		long long A[n];
		map<int,int>P;
		long long ans=0;
		for(int i=0;i<n;++i){
			cin>>A[i];
			string s=bitset<64>(A[i]).to_string();
			reverse(s.begin(),s.end());
            for(int j=0;j<s.size();++j){
				if(s[j]=='1'){
					P[j+1]++;
				}
			}
		}
        
		for(auto x:P){
			if(x.second>(n/2)){
				ans+=pow(2,x.first-1);
			}
		}
		 
		cout<<ans<<endl;
	}
}
