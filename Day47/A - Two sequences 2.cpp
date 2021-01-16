/*
Platform :- Atcoder
Problem :- A - Two sequences 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long int A[n];
    vector<long int>P,Q;
    long int mx=-1;
    for(int i=0;i<n;++i){
        cin>>A[i];
       mx=max(mx,A[i]);
      Q.push_back(mx);
    }
    
    mx=-1;
    long int B[n];
    for(int i=0;i<n;++i){
        cin>>B[i];
        
    }
    
  
    long long temp=0;
    for(int i=0;i<n;++i){
        long long z=Q[i]*B[i];
        temp=max(temp,z);
        cout<<temp<<endl;
        
    }
   
    
}
