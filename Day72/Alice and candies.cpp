/*
Platform :- Hackerearth
Contest :- February easy
Problem :- Alice and Candies
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
   
     int z=0;
	 long long temp=0,d=1;
	 while(temp<n){
		 temp+=d;
		 d+=2;
		 z++;
	 }
	 
	 if(n%2==0){
           int d=2;
		   int ans=0;
		   while(d<=z){
			   if(n%d==0){
                  int c=d/2;
				  int k=c;
				  long int temp1=n/2,temp2=n/2;
				  if(temp1%2==0){
				      temp1--;
				  }
				  if(temp2%2==0){
				  temp2++;
				  }
				  else{
				      temp2+=2;
				  }
				  long int temp=0;
				  //cout<<temp1<<" "<<temp2<<endl;
				  for(long int i=temp1;i>1 && c>0;i-=2){
                      temp+=i;
					  c--;
				  }

				  for(long int i=temp2;k;i+=2){
					  temp+=i;
					  k--;
				  }
				  //cout<<temp<<" "<<ans<<endl;

				  if(temp==n)ans++;
				  else {
					  if(temp>n)break;
				  }
			   }
			   else{
				   if(z<d)break;
			   }
			   d+=2;
		   }
		   cout<<ans<<endl;
	 }
	 else{
	     
		 int f=0;
		 int ans=0;
		 int d=1;
		  
		 while(d<=z){
			  
			 if(d==1){
				 ans++;
			 }
			 else{
			     //cout<<n<<" "<<d<<endl;
                if(n%d==0){
					int c=(d-1)/2;
					int k=c;
                  long int temp=n/d;
                  long int zz=temp;
                  // cout<<k<<" "<<c<<" "<<temp<<endl;
				  for(int i=zz-2;c>0 && i>1;i-=2){
					  temp+=i;
					  c--;
				  }
				   
				  for(int i=zz+2;k>0;i+=2){
					  temp+=i;
					  k--;
				  }
				   //  cout<<temp<<" "<<d<<endl;

				  if(temp>n){
					  break;
				  }
				  else {
					  if(temp==n){
						  ans++;
					  }
				  }
				}
				else{
					if(z<d)break;
				}
				 
			 }
			 d+=2;

		 }
		 cout<<ans<<endl;
	 }
}
