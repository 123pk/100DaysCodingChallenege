/*
Platform :- Atcoder
Problem :- Stamp
Approach :- this problem is all about finding right value of 'k' and number of operations to paint all white brushes . So the value of 'k' is minimum difference between blue boxes 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  
  long int n;
  int m;
  cin>>n>>m;
  if(m==0){cout<<1<<endl;exit(0);}
  
  long int A[m];
  long int mx=1000000000;
  vector<long int>P;
  for(int i=0;i<m;++i){
      cin>>A[i];
      
  }
  sort(A,A+m);
  
  long int zz=A[0]-1;
  if(zz)mx=min(mx,zz);
  
  P.push_back(zz);
  for(int i=1;i<m;++i){
      long int temp=A[i]-A[i-1];
      if(temp)temp--;
      if(temp)mx=min(mx,temp);
      P.push_back(temp);
  }
 
  long int xx=n-A[m-1];
  if((xx)){mx=min(mx,xx);
  P.push_back(xx);}
  
  
  if(mx){
      long int ans=0;
      for(int i=0;i<P.size();++i){
         // cout<<P[i]<<" # ";
          ans+=P[i]/mx;
          if(P[i]%mx)ans++;
      }
      cout<<ans<<endl;
  }
  else {
     cout<<0<<endl;
      
  }
}
