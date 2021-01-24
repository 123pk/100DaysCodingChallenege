/*
Platform :- Hackerearth
Problem :- Scoreboard Queries
Hint :- Use Set for finding unique elements and hashmap for occurence 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
        
		 
		long int A[n];
		 set<long int>Q;
		int tot=0;
		map<long int,int>P;
		for(int i=0;i<n;++i){
			cin>>A[i];
			 Q.insert(A[i]);
			P[A[i]]++;
			 
		}
		 
		 
		for(int i=0;i<q;++i){
			int x;
			long int y;
			cin>>x>>y;
            x--;
			
			 P[A[x]]--;
			 if(P[A[x]]==0){
				 Q.erase(Q.find(A[x]));
			 }
			 P[y]++;
			 Q.insert(y);
			 A[x]=y;
			 long int ans=Q.size();
			 ans++;
			 cout<<ans<<endl;
		}
	}
}
