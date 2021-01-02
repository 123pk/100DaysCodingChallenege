/*
Platform :- Hackerearth 
Problem :- Maximum Profit
Approach :- create a vector of non repeating elements and sort them in decresing order and find sum of first k elements
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;

		map<long int,int>P;
		for(int i=0;i<n;++i){
			long int x;
			cin>>x;
			P[x]++;
		}

		vector<long int>Q;
		for(auto x:P){
			Q.push_back(x.first);
		}
		sort(Q.begin(),Q.end(),greater<long int>());
		long long tot=0;
		int z=Q.size();
		for(int i=0;i<min(k,z);++i)tot+=Q[i];
		cout<<tot<<endl;
	}
}
