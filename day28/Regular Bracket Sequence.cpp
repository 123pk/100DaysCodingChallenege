#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size(),f=0;
        
        int a=0,b=0,c=0;
        for(int i=0;i<n;++i){
            if(s[i]==')')c--;
            else c++;
            if(c<0){f=1;break;}
        }
        if(f||(n%2)){
            cout<<"NO"<<endl;
            continue;
        }
        c=0;
        for(int i=n-1;i>=0;--i){
            if(s[i]=='(')c--;
            else c++;
            if(c<0){
                f=1;break;
            }
        }
        
        if(f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
