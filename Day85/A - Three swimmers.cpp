/*
Platform :- Codeforces
Contest :- Codeforces Round 704 Div 2
Problem :- A - Three swimmers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        
        if(p%a==0 || p%b==0 || p%c==0){
            cout<<0<<endl;
            continue;
        }
        long long ans=a-(p%a);
        ans=min(ans,b-(p%b));
        ans=min(ans,c-(p%c));
        cout<<ans<<endl;
    }
}
