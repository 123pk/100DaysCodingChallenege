/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 190
Problem :- D - Staircase Sequences
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int s=0;
	   
	cin>>s;
	int ans=0;
	for(long long int i=1;i*i<=s;i++)
	{
		if(s%i==0)
		{
			 if((i-1)%2==s%i)
			  ans++;
			 if(i!=s/i)
			 {
			   if(((s/i)-1)%2==s%(s/i))
			     ans++;			 	
			 }
		}
	}
	s*=2;
	for(long long int j=1;j*j<=s;j+=2)
	{
		 
		if(s%j==0)
		{int i=s/j;
			 if((i-1)%2==s%i)
			  ans++;
			 
		}
	}	
	cout<<2*ans<<endl;
	return 0;
}
