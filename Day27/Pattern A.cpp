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
        
        
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                cout<<j<<i;
            }
            cout<<endl;
        }
    }
}
