/*
Platform :- Codeforces
Problem  :- B - String LCM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string temp1,temp2;
        string s,q;
        cin>>s>>q;
        temp1=s;
        temp2=q;
        
        if((s.size()==q.size())){
            int f=0;
            for(int i=0;i<s.size();++i){
                if(s[i]!=q[i]){
                    f=1;
                    break;
                }
            }
            if(f)cout<<-1<<endl;
            else cout<<temp1<<endl;
        }
        else{
            int z1=s.size();
            int z2=q.size();
            int z=z1*z2;
            z/=(__gcd(z1,z2));
            int ss=z/s.size();
            int qq=z/q.size();
            for(int i=2;i<=ss;++i){
                temp1+=s;
            }
            
            for(int i=2;i<=qq;++i){
                temp2+=q;
            }
            if(temp1==temp2){
                cout<<temp1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
            
        }
        
    }
}
        
