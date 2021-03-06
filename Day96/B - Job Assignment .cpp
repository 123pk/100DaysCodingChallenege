/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 194
Problem :- B - Job Assignment 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     
     long long A[n],B[n];
     long long ans=1e18;
     long long mn=1e18;
     long long mn2=1e18;
     map<long long,int>P,Q;
     for(int i=0;i<n;++i){
         cin>>A[i]>>B[i];
         P[A[i]]++;
         Q[B[i]]++;
         mn=min(mn,A[i]);
         
         ans=min(ans,A[i]+B[i]);
     }
     
     for(int i=0;i<n;++i){
         long long temp=1e18;
         if(A[i]==mn){
         for(int j=0;j<n;++j){
             if(i==j)continue;
             temp=min(temp,B[j]);
         }
         mn2=min(mn2,temp);
         }
     }
     mn=max(mn,mn2);
     cout<<min(ans,mn)<<endl;
     
}
