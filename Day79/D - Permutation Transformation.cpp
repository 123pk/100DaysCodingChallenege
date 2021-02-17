/*
Platform :- Codeforces
Contest :- Codeforces round 703 Div 3
Problem :- D - Permutation Transformation
*/

#include<bits/stdc++.h>
using namespace std;

int A[101];
void permu(int l,int r,map<int,int>&B,int h){
    if(l<=r){
        if(l==r){
            B[A[l]]=h;
            permu(l+1,r,B,h+1);
        }
        
    int mx=-1;
    int temp=-1;
    for(int i=l;i<=r;++i){
        if(mx<A[i]){
            mx=A[i];
            temp=i;
        }
    }
    B[mx]=h;
    
    permu(l,temp-1,B,h+1);
    permu(temp+1,r,B,h+1);
    
    }
    else return;
   
}

int main(){
    int t;
    cin>>t;
     
    while(t--){
        int n;
        cin>>n;
    
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
    
        map<int,int>P;
        permu(0,n-1,P,0);
        
        for(int i=0;i<n;++i)cout<<P[A[i]]<<" ";
        cout<<endl;
    }
}
