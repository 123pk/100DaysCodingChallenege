/*
Platform :-  Codeforces
Problem :- B - Planet Lapituletti
Contest:- Codeforces Round 705 Div 2
*/

#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int h,int m){
    string z="34679";
    string temp1=to_string(x);
    string temp2=to_string(y);
    
    for(int i=0;i<5;++i){
        for(int j=0;j<temp1.size();++j){
            if(z[i]==temp1[j] || z[i]==temp2[j])return false;
        }
    }
    
    if(x<h && y<m)return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int h,m;
        cin>>h>>m;
        
        string s;
        cin>>s;
        
        int a=(s[0]-'0') * 10;
        a+=(s[1]-'0');
        
        int b=(s[s.size()-2]-'0')*10;
        b+=(s[s.size()-1]-'0');
        //cout<<a<<' '<<b<<endl;
        while(1){
            if(check(a,b,h,m)){
                int z1=a%10;
                int z2=a/10;
                if(z2==5){
                    z2=2;
                }
                else if(z2==2)z2=5;
                
                if((a%10)==2){
                    z1=5;
                }
                else if(z1==5)z1=2;
                 
                
                int z3=b%10;
                int z4=b/10;
                if(z3==2)z3=5;
                else if(z3==5){
                    z3=2;
                }
                
                if(z4==2)z4=5;
                else if(z4==5)z4=2;
                
                int temp=(z1*10)+z2;
                int temp2=(z3*10)+z4;
                if(check(temp2,temp,h,m)){
                    break;
                }
            }
            b++;
            if(b==m)a++;
            b%=m;
            a%=h;
           // cout<<a<<" "<<b<<endl;
        }
        
        string ans;
        if(a<10)
        {
            ans+='0';
            ans+=to_string(a);
        }
        else ans+=to_string(a);
        ans+=":";
        if(b<10){
            ans+='0';
            ans+=to_string(b);
        }
        else ans+=to_string(b);
        cout<<ans<<endl;
    }
}
