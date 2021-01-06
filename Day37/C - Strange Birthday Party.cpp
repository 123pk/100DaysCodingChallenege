/*
Platform :- Codeforces
Problem :- C - Strange Birthday Party
Approach :- sort the array A in descending order and we will add min( B[A[i]], B[i] ) till the max value of A and after that we will add B[A[i]]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     int t;
     cin>>t;
     while(t--){
         int n,m;
         cin>>n>>m;
         
         long int A[n];
         long int mx=-1;
         for(int i=0;i<n;++i){
             cin>>A[i];
             A[i]--;
             
         }
         sort(A,A+n,greater<long int>());
         mx=A[0];
         long int B[m];
        
         for(int i=0;i<m;++i){
             cin>>B[i];
         }
         
         
         long long tot=0;
         for(int i=0;i<n;++i){
             if(i<=mx){
                 tot+=min(B[A[i]],B[i]);
             }
             else{
                 tot+=B[A[i]];
             }
         }
         cout<<tot<<endl;
     }
}
