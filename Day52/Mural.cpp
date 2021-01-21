/*
Platform :- Google Kickstart Practise round 2019
Problem :- Mural
Aproach :- Sliding window
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;++z){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long int temp=0, tot=0;
        int x=(n+1)/2;
        for(int i=0;i<x;++i){
            temp+=(s[i]-'0');
        }
        tot=max(tot,temp);
        for(int i=x;i<n;++i){
            temp-=(s[i-x]-'0');
            temp+=(s[i]-'0');
            tot=max(tot,temp);
        }
        cout<<"Case #"<<z<<": "<<tot<<endl;
    }
}
