/*
Platform :- Hackerearth
Contest :- February circuits 
Problem :- The smallest string

  SOLUTION WILL BE ADDED ONCE CONTEST IS OVER
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;

		string s;
		cin>>s;

		for(int i=0;i<n;++i){
			if(s[i]=='a'){
                if(k){
					if(i==n-1){
						k%=26;
						s[i]=s[i]+k;
					}

				}
				else continue;
			}
			else{
				if(k>0){
					
					int temp=26-(s[i]-'a');
					if(k>=temp){
						k-=temp;
						s[i]='a';
						if(i==n-1){
							k%=26;
							s[i]=s[i]+k;
							k-=k;
							break;
						}
					}
					else{
						if(i==n-1){
							k%=26;
							///cout<<s[i]<<" %% "<<k<<endl;
							s[i]=s[i]+k;
							k-=k;
						}
						else{
							continue;
						}
					}
 
				}
				else break;
			}
			//cout<<s<<" "<<k<<endl;
		}
		cout<<s<<endl;
	}
}
