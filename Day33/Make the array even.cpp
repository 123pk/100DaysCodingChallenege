/*
Platform :- Hackerearth
Problem  :- Make the array even
Approach :- thing to note is that we can change two adjacent odd elemnts of array into even in just '1' operation else we need '2' operations if neighbours of odd elemnt is even

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
		int c=0;
		for(int i=0;i<n;++i){
		  cin>>A[i];
           if(i){
			   if(A[i]%2){
				   if(A[i-1]%2){
					   c++;
					   A[i]-=1;
					   A[i-1]-=1;
				   }
				   else{
					   if(i==n-1){
						   c+=2;
					   }
				   }
			   }
			   else{
				   if(A[i-1]%2){
					   c+=2;
					   A[i-1]-=1;
				   }
			   }
		   }
		}
		cout<<c<<endl;
	}
}
