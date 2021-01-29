/*
Platform :- Codeforces
Contest :- Education round 103
Problem :- A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long int n,k;
        cin>>n>>k;
        
        if((n>k)){
           long int z=n/k;
           if(n%k){
               z++;
           }
           k*=z;
           long int ans=k/n;
           if(k%n){
               ans++;
           }
           cout<<ans<<endl;
        }
        else{
            if(n%k==0){
                cout<<1<<endl;
            }
            else{
               long int ans=k/n;
           if(k%n){
               ans++;
           }
           cout<<ans<<endl; 
            }
        }
    }
}
