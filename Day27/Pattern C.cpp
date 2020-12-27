/*
Platform :- Codechef
Platform :- Pattern C
Approach :- analyse and brute force
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        
        for(int i=1;i<=n;++i){
            for(int j=1;j<i;++j){
                cout<<"*";
            }
            for(int j=(n+1-i);j>=(1);--j){
                cout<<j;
            }
            cout<<endl;
        }
    }
}
