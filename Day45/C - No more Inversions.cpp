/*
Platform :- Codeforces
Problem :- C - No more Inversions
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m;
       
       int z=n-m+1;
       for(int i=1;i<=(m-z);++i){
           cout<<i<<" ";
       }
       for(int i=1;i<=z;++i){
           cout<<m<<" ";
           m--;
       }
       cout<<endl;
        
    }
}
        
