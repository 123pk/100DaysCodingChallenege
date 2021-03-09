/*
Platform :- coding competitions with google
Problem :- Revenge of the pancake
contest :- code jam 2016 qualification round
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
         
        int ans=0;
        string s;
        cin>>s;
        
        string zz;
        int f=0;
        for(int i=0;i<s.size();++i){
            if(f){
                if(s[i]=='-'){
                    continue;
                }
                else{
                    zz+='+';
                    f=0;
                }
            }
            else{
                if(s[i]=='-'){
                    zz+='-';
                    f=1;
                }
                else if(zz.size()==0){
                    zz+='+';
                }
            }
        }
        
        for(int i=0;i<zz.size();++i){
             if(i==0){
                 if(zz[i]=='-')ans++;
             }
             else{
                 if(zz[i]=='-'){
                     if(zz[i-1]=='+')ans+=2;
                 }
             }
        }
        cout<<ans<<endl;
    }
}
