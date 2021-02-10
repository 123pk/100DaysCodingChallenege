/*
Platform :- Hackerearth
Contest :- February easy
Problem :- Deleting Arrays
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		long long n,k;
		cin>>n>>k;
        k*=2;
		k++;
		long long temp=n/k;
		if(n%k)temp++;

		cout<<temp<<endl;
	}
}
