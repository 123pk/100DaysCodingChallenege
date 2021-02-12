/*
Platform :- Codeforces
Contest :- Codeforces Round #701 Div 2
Problem :- A - Add and Divide
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b;
        
        cin>>a>>b;
        
        long long c=a+1;
         for (long long i = 0; i < 100000; i++) {
			if ((b == 1) &&   i== 0) {
				continue;
			}
			long long z = i;
			long long temp = a;
			while (temp) {
				z++;
				temp =temp/(b+i);
			}
			c = min(c,z);
		}
	
        cout<<c<<endl;
    }
}
