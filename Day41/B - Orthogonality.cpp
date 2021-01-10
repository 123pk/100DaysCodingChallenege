/*
Platform :- Leetcode
Problem :- B - Orthogonality
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int A[n],B[n];
    for(int i=0;i<n;++i)cin>>A[i];
    for(int i=0;i<n;++i)cin>>B[i];
    long int tot=0;
    for(int i=0;i<n;++i){
        tot+=(A[i]*B[i]);
    }
    if(tot)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
