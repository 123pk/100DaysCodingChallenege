/*
 Platform :- Hackerearth
 Problem :- Non-great equations
 Approach :- The problem looks scary if you read it first time but when you will analyse the question with some input you will 
             find it is following certain pattern. This question is all about finding that pattern
             
             so the pattern is 
             for b=0 ---> a=0 , c=0
             b=1 ----> a=0 , c=1
             b=2 ----> a=1 , c=3
             b=3 ----> a=3 , c=6
             b=4 ----> a=6 , c=10
            
            you can clearly see that the difference between ( a and c) (| a - c | = b) . we have use absolute value because b can be negative
            --> one more thing that you can analyse is the previous value of 'c' becomes  current value of 'a' .
            So, itterate from 1 to b and find 'a' and 'c' respectively , Note :- b can be negative in that case you will print 'c' first and then 'a'
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	long int b;
	cin>>b;
	int f=0;
	if(b<0){b=abs(b);f=1;}       // checking b is negative or not 

	if(b==0){
		cout<<0<<" "<<0<<endl;
		exit(0);
	}

	long long  a=0,c=0;
	for(long int i=1;i<=b;++i){
		c=a;
		a+=i;
	}            
	if(f)cout<<(max(a,c))<<" "<<min(a,c)<<endl;        //b can be negative if c<a so we will print larger value first and smaller value afterwards
 	else cout<<(min(a,c))<<" "<<max(a,c)<<endl;


}
