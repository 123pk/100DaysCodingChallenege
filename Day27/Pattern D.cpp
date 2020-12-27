/*
Platform :- Codehcef
Problem :- Pattern D
Approach :- Analyse and bruteforce
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        for(int i=0;i<=n;++i){
            
            for(int j=0;j<i;++j){
                cout<<"*";
            }
            cout<<i<<endl;
        }
    }
}
