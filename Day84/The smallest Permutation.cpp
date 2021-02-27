/*
Platform :- Hackerearth
Contest :- Februaray Circuits 
Problem :- The smallest permutation

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

		long int A[n];
		map<int,int>P;
		int f=0;
		int temp=0;
		for(int i=0;i<n;++i){
			cin>>A[i];
			P[A[i]]=i+1;
			if(temp==0){
				if((i+1)!=A[i]){
					f=1;
					temp=i+1;
				}
			}
		}
		if(f){
			for(int i=temp;i<n;++i){
				if(A[i]==temp){
					swap(A[temp-1],A[i]);
					break;
				}
			}
		}
		else{
			swap(A[n-1],A[n-2]);
		}
		for(int i=0;i<n;++i){
			cout<<A[i]<<" ";
		}
		cout<<endl;


	}
}
