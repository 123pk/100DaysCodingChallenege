/*
Platform :- Codeforces
Problem :- A - Anti Knapsack
Contest :- Codeforces Round 705
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int temp=k/2;
        if(k%2){
            temp++;
        }
        
        int ans=n-temp;
        cout<<ans<<endl;
        for(int i=temp;i<=n;++i){
            if(i==k){
                continue;
            }
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
