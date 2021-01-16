/*
Platform :- Atcoder
Problem :- B - mex Boxes
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
     int A[n];
    map< int,int>P;
    int mx=-1;
    for(int i=0;i<n;++i){
        cin>>A[i];
        P[A[i]]++;
        mx=max(mx,A[i]);
    }
     
    int c=0;
    
    int tot=0;int f=0,g=0;
    for(int i=0;i<=(mx+1);++i){
        m=min(m,P[i]);
        tot+=m;
    }
   cout<<tot<<endl;
    
}
