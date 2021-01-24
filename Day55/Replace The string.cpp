/*
Platform :- hackerearth 
Problem :- Replace The string 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s,p;
		cin>>s>>p;
    
    map<char,int>P,Q;
		int c=count(s.begin(),s.end(),'?');
		int d=count(p.begin(),p.end(),'?');

		int f=0,e=0;
		set<char>Z;
		for(auto x:s){
			if(x!='?'){
				P[x]++;
				Z.insert(x);
			}
		}

		for(auto x:p){
			if(x!='?'){
				Q[x]++;
				Z.insert(x);
			}
		}

		for(auto x:Z){
			if(P[x]>Q[x]){
				f+=P[x]-Q[x];
			}
			else {
				e+=Q[x]-P[x];
			}
		}
          
		if(f<=d && e<=c)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
