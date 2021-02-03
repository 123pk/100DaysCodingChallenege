/*
Platform :- Codechef
Problem :- CHEFTEMP
Approach :- Brute Force find absolute value
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A[7],B[7];
    for(int i=0;i<7;++i){
        cin>>A[i];
    }
    
    for(int i=0;i<7;++i){
        cin>>B[i];
    }
    
    long long ans=0;
    for(int i=0;i<7;++i){
        ans+=abs(A[i]-B[i]);
    }
    
    cout<<ans<<endl;
}
