/*
Platform :- Codeforces
Problem :- B - Minimal Cost
Contest :- Codeforces Global Round 13
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long u,v;
        cin>>n>>u>>v;
        
        long long A[n];
        int c=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]==A[0])c++;
        }
        
        if(c==n)cout<<(v+min(u,v))<<endl;
        else{
            int f=0;
            int temp=A[0];
            int i=1;
            while(i<n){
                 if(abs(A[i]-A[i-1])<=1){
                     i++;
                 }
                 else{
                     f=1;break;
                 }
                //i++;
            }
            if(f)cout<<0<<endl;
            else cout<<(min(u,v))<<endl;
        }
        
    }
}
