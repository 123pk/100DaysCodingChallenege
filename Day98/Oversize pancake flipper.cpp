/*
Platform :- Coding competition with google 
Problem :- Oversize pancake flippers
Contest :- Google codejam 2017 qualification
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        
        cout<<"Case #"<<z<<": ";
        
        string s;
        int k;
        cin>>s>>k;
        int n=s.size();
        int ans=0;
        int f=0;
        for(int i=0;i<(n-k)+1;++i){
            if(s[i]=='-'){
                for(int j=i;j<(i+k);++j){
                    if(s[j]=='-')s[j]='+';
                    else s[j]='-';
                }
                ans++;
            }
        }
        
        for(int i=0;i<n;++i){
            if(s[i]=='-')f=1;
        }
        
        if(f)cout<<"IMPOSSIBLE"<<endl;
        else cout<<ans<<endl;
    }
}
