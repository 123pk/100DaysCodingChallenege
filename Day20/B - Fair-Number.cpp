/*
Platform :- codeforces
Problem :- B - fair Number
Approach :- Increase the value of until you find a number that is divisible by all its digits
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a=n;
        while(1)
		{
           long long int temp;
			while(1)
			{
				temp=a%10;
				if(temp)
				if(n%temp)
				    break;
				 a=a/10;
				if(a==0)break;
			
			}
			if(a==0)
				break;
			else
			{
				n=n+1;
				a=n;
			}
		}
		
		cout<<n<<endl;
        
    }
}
