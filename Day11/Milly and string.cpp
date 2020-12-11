/*
Platform :- Hackerearth 
Problem :- Milly and Strings
Approach :- Make a prefix array and store count for each index which are satisfying the given condition 
            if L = = 1 then print A[ R] 
            else print A[r] - A[l-1]

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;

		int A[s.length()];
		int c=0;
		for(int i=0;i<=s.length();++i){
			if(i<=s.length()-2){
            if(s[i]==s[i+1]&& s[i]==s[i+2]){
			           	c++;
			         }
			      A[i]=c;
			}
			else{
				A[i]=c;
			}
			
		}


		int q;
		cin>>q;
		for(int i=1;i<=q;++i){
			int l,r;
			cin>>l>>r;
			l-=1;
			r-=1;
			if(l==0){
				      cout<<(A[r])<<endl;
			}
			else{
               cout<<(A[r]-A[l-1])<<endl;
			}
            
		}
	}
}
