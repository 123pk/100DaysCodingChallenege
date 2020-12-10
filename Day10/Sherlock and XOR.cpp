/*
Platform :- Hackerearth
Problem :- Sherlock and XOR
Approach :- Point to note is that xor can be odd if one of two element is odd and other is even 
          Traverse through the array and count odd numbers and even numbers . if you find odd number 
          increment 'total' by total number of even number till there and vice versa for even number.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c=0;
		long int A[n];
		for(int i=0;i<n;++i){
			cin>>A[i];
		}
        
		int d=0,k=0;
		long int tot=0;
		for(int i=0;i<n;++i){
            if(A[i]%2){
				c++;
				tot+=d;
			}
			else{
				d++;
				tot+=c;
			}
		}
		
		cout<<tot<<endl;
	}
}
