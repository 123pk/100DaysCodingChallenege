/*
Platform :- Hackerearth
Problem :- The Minimum cost
Approach :- Find the cost of changing all odd position to '1' and all even positon to '1' and print the minimum amount 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long c,d;
		cin>>n>>c>>d;

		long int A[n];
		int f=0;
		for(int i=0;i<n;++i){
			cin>>A[i];
			if(i){
				if( (A[i] ^ A[i-1])  != 1)f=1;
			}
		}

        if(f==0)cout<<0<<endl;
		else{
			int o1=0,o2=0,e1=0,e2=0;
			for(int i=0;i<n;++i){
                if(i%2){
                    if(A[i]){
                       o1++;
					}
					else{
                       o2++;
					}
				}
				else{
					if(A[i]){
                         e1++;
					}
					else{
						e2++;
					}
				}
			}
            int md1=n/2;
			int md2=n/2;
			if(n%2){
				md1++;
			}

			long long int x=(md1-o1)*c + (md2-e2)*d;
			long long int y=(md1-o2)*d + (md2-e1)*c;

			cout<<min(x,y)<<endl;
		}
	}
}
