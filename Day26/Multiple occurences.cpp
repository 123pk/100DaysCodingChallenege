/*
Platform :- Hackerearth
Problem :- Multiple Occurences
Approach :- Using map find the sum of absolute difference of firsta and last occurence of element of array
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
	for(int i=0;i<n;++i){
		cin>>A[i];
		P[A[i]]=i+1;
	}

	int tot=0;
	for(int i=0;i<n;++i){
		if(P[A[i]]>0){
			tot+=abs(P[A[i]]-(i+1));
			 
			P[A[i]]=0;
		}
	}
	cout<<tot<<endl;
	}
}
