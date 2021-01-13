/*
Platform :- Codechef
Problem :- Chef and division 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long int m,d;
        cin>>n>>m>>d;
        
        long long tot=0;
        for(int i=0;i<n;++i){
            long int x;
            cin>>x;
            tot+=x;
        }
        
        long int ans= tot/m;
        ans=min(ans,d);
        cout<<ans<<endl;
        
    }
}
