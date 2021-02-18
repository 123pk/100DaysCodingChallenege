/*
Platform :- Codeforces
Contest :- Codeforces Round 703 Div 2
Problem :- A - Shifting Stacks
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        int f=0;
        for(int i=1;i<n;++i){
            if(i==1){
                A[i]+=A[i-1];
            }
            else{
                A[i]+=A[i-1]-(i-1);
            }
            
            if(A[i]<(i)){
                f=1;break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}
