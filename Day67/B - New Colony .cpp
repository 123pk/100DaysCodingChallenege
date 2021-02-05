/*
Platform :- Codeforces
Contest :- Codeforces Round #699 Div 2
Problem :- B - New Colony
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         long int k;
         cin>>n>>k;
         
         long int A[n];
         long int mx=-1;
         for(int i=0;i<n;++i){
             cin>>A[i];
             mx=max(mx,A[i]);
         }
         
         long int temp=0;
         for(auto x:A){
             temp+=mx-x;
         }
         
         if(k>temp){
             cout<<-1<<endl;
         }
         else{
             int ans=0;
             while(k--){
                 int temp=1;
                  for(int i=1;i<n;++i){
                      if(A[i]<=A[i-1]){
                          temp++;
                          if(i==n-1){
                              temp=-1;
                          }
                      }
                      else{
                          A[i-1]++;break;
                      }
                  }
                 
                  if(temp==-1){
                      ans=-1;break;
                  }
                  ans=temp;
             }
             cout<<ans<<endl;
         }
    }
}
