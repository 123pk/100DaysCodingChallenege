/*
Platform :- Coding competition with google
Problem :- Tidy Number
CONTEST :- CODEJAM QUALIFICATION ROUND 2017
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        string s;
        cin>>s;
        
        for(int i=s.size()-1;i>0;--i){
            if(s[i]<s[i-1]){
                for(int j=i;j<s.size();++j){
                    s[j]='9';
                }
                int z=s[i-1]-'0';
                z--;
                if(z==0){
                    s[i-1]='0';
                }
                else if(z==1)s[i-1]='1';
                else if(z==2)s[i-1]='2';
                else if(z==3)s[i-1]='3';
                else if(z==4)s[i-1]='4';
                else if(z==5)s[i-1]='5';
                else if(z==6)s[i-1]='6';
                else if(z==7)s[i-1]='7';
                else if(z==8)s[i-1]='8';
                else s[i-1]='9';
                
            }
        }
        
        long long ans=stoll(s);
        cout<<ans<<endl;
    }
}
