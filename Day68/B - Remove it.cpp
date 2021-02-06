/*
Platform :- Atcoder
Contest :- Atcoder Begineer contest 191
Problem :- B - Remove it
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     long int k;
     cin>>n>>k;
     
     long int A[n];
     for(int i=0;i<n;++i){
         cin>>A[i];
         
         if(A[i]==k){
             continue;
         }
         else cout<<A[i]<<" ";
     }
     cout<<endl;
}
